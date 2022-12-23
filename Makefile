NAME = push_swap
INCLUDES = -I ./src/headers/push_swap.h -I ./libft/libft.h -I ./GNL/get_next_line.h -I ./ft_printf/lib_ft_printf.h
SRC = ./src/push_swap.c ./src/engine/engine.c ./src/engine/rotate_instructions.c ./src/engine/swap_push_instructions.c \
	  ./src/utils/error.c ./src/utils/success.c ./src/utils/utils.c ./src/utils/validate.c ./src/engine/sort_stack.c
	  
CC = gcc
CFLAGS = -I -c -g
OBJ = $(SRC:.c=.o)
MYLIBFT = ./MyLIBFT/

all: $(NAME)

libft: 
	@cd $(MYLIBFT) && $(MAKE)

$(NAME): $(OBJ) libft
	@$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJ) ./MyLIBFT/libft.a

clean:
	@cd $(MYLIBFT) && $(MAKE) clean
	@rm -rvf $(OBJ) *.o

fclean: clean
	@cd $(MYLIBFT) && $(MAKE) fclean
	@rm -rvf $(NAME)

re: fclean all

.PHONY: clean fclean all re
