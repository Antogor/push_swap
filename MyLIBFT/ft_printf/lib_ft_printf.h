/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:06:52 by agarzon-          #+#    #+#             */
/*   Updated: 2020/05/29 15:47:16 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_PRINTF_H
# define LIB_FT_PRINTF_H

//# include <unistd.h>
//# include <stdarg.h>
//# include <stdio.h>
# include "../libft/libft.h"

typedef	struct		s_list_printf
{
	va_list			args;
	int				br;
	int				d;
	int				c;
	char			*s;
	unsigned int	u;
	int				hexa;
	long int		p;
	int				flags;
	int				punt;
	int				precision;
	int				width;
	int				type;
	int				len;
	int				arg_neg;
}					t_printf;

int					ft_printf(const char *s, ...);
int					check_flags(const char *s, t_printf *tab);
int					ft_flags(const char *s, t_printf *tab);
int					ft_punt(const char *s, t_printf *tab);
int					ft_width(const char *s, t_printf *tab, int flags);
int					ft_precision(const char *s, t_printf *tab);
int					ft_type(const char *s, t_printf *tab);
void				ft_conversion(t_printf *tab);
char				*ft_itoi(unsigned long int n);
long int			ft_atoa(const char *nptr);
int					ft_total(size_t l, int tam);
void				ft_put_spaces(int total, t_printf *tab);
void				ft_putzeros(int total, t_printf *tab);
void				ft_put_precision(char *s, int nb, size_t len,
					t_printf *tab);
char				*ft_convert_hexa(int nb);
char				*ft_convert_hexa_neg(int nb);
char				*ft_convert_memory(long int nb);
void				display_d(int d, t_printf *tab);
void				display_c(int c, t_printf *tab);
void				display_s(char *s, t_printf *tab);
void				display_u(unsigned int nb, t_printf *tab);
void				display_hexa(int h, t_printf *tab);
void				display_p(long int p, t_printf *tab);
void				display_0(t_printf *tab);
#endif
