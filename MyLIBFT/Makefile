# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 21:52:21 by agarzon-          #+#    #+#              #
#    Updated: 2019/11/09 21:52:21 by agarzon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUN = ./GNL/get_next_line.c ./libft/ft_bzero.c ./libft/ft_isalnum.c ./libft/ft_isalpha.c ./libft/ft_isascii.c ./libft/ft_isdigit.c \
./libft/ft_isprint.c ./libft/ft_memccpy.c ./libft/ft_memchr.c ./libft/ft_memcmp.c ./libft/ft_memcpy.c ./libft/ft_memmove.c \
./libft/ft_memset.c ./libft/ft_strchr.c ./libft/ft_strlen.c ./libft/ft_strncmp.c ./libft/ft_strrchr.c ./libft/ft_tolower.c \
./libft/ft_toupper.c ./libft/ft_strlcpy.c ./libft/ft_strnstr.c ./libft/ft_atoi.c ./libft/ft_strlcat.c ./libft/ft_calloc.c ./libft/ft_strdup.c \
./libft/ft_substr.c ./libft/ft_strjoin.c ./libft/ft_strtrim.c ./libft/ft_split.c ./libft/ft_itoa.c ./libft/ft_strmapi.c ./libft/ft_putchar_fd.c \
./libft/ft_putstr_fd.c ./libft/ft_putendl_fd.c ./libft/ft_putnbr_fd.c ./libft/ft_lstnew.c ./libft/ft_lstadd_front.c ./libft/ft_lstsize.c \
./libft/ft_lstlast.c ./libft/ft_lstadd_back.c ./libft/ft_lstdelone.c ./libft/ft_lstclear.c ./libft/ft_lstiter.c ./libft/ft_lstmap.c \
./ft_printf/ft_printf.c ./ft_printf/check_flags.c ./ft_printf/ft_convert_hexa.c  ./ft_printf/display_d.c ./ft_printf/display_c.c \
./ft_printf/display_s.c ./ft_printf/ft_flags.c ./ft_printf/ft_width.c ./ft_printf/ft_type.c ./ft_printf/ft_conversion.c ./ft_printf/ft_punt.c \
./ft_printf/ft_precision.c ./ft_printf/display_u.c ./ft_printf/ft_itoi.c ./ft_printf/ft_put_spaces.c ./ft_printf/ft_total.c ./ft_printf/ft_putzeros.c \
./ft_printf/display_hexa.c ./ft_printf/ft_convert_hexa_neg.c ./ft_printf/ft_atoa.c ./ft_printf/display_p.c ./ft_printf/ft_convert_memory.c \
./ft_printf/ft_put_precision.c ./ft_printf/display_0.c

OBJS = $(FUN:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) ./libft/libft.h
	@gcc -c -I $(CFLAGS) $(FUN)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@$(MAKE) clean

clean:
	@rm -f $(OBJS) *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
