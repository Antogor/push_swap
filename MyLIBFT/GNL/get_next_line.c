/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:42:41 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/13 18:55:23 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_comp_new_line(char **s, char **line)
{
	int		l;
	char	*tmp;

	l = 0;
	while ((*s)[l] != '\n' && (*s)[l] != '\0')
		l++;
	if ((*s)[l] == '\n')
	{
		*line = ft_substr(*s, 0, l);
		tmp = ft_strdup(&(*s)[l + 1]);
		free(*s);
		*s = tmp;
	}
	else if ((*s)[l] == '\0')
	{
		*line = ft_strdup(*s);
		free(*s);
		*s = NULL;
		return (0);
	}
	return (1);
}

static int	ft_comp(int bwr, int fd, char **s, char **line)
{
	if (bwr < 0)
		return (-1);
	else if (bwr == 0 && s[fd] == NULL)
	{
		*line = ft_strdup("");
		free(*s);
		*s = NULL;
		return (0);
	}
	else
		return (ft_comp_new_line(&s[fd], line));
}

int	buffer_reader(char **s, char *buff, int fd)
{
	char		*tmp;

	if (s[fd] == NULL)
		s[fd] = ft_strdup(buff);
	else
	{
		tmp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = tmp;
	}
	if (ft_strchr(s[fd], '\n'))
		return (0);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	char		*buff;
	static char	*s[4096];
	int			bwr;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	bwr = read(fd, buff, BUFFER_SIZE);
	if (!buff || fd < 0 || line == 0)
		return (-1);
	while (bwr > 0)
	{
		buff[bwr] = '\0';
		if (buffer_reader(s, buff, fd) == 0)
			break ;
	}
	free(buff);
	buff = NULL;
	return (ft_comp(bwr, fd, s, line));
}
