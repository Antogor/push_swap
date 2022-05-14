NAME = push_swap
INCLUDES = ./MyLIBFT/libft/libft.h ./src/push_swap.h
SRC = src/
FLAGS = gcc -Ig -g
FUN = $(wildcard $(SRC)*.c)
OBJ = $(FUN:%.c=%.o)
LIBFT = ./MyLIBFT/libft.a
MYLIBFT = ./MyLIBFT/

all: libft $(NAME)

libft: 
	@$(MAKE) -C $(MYLIBFT)

$(NAME): $(OBJ) $(INCLUDES)
	@$(FLAGS) $(OBJ) -o $(NAME) $(LIBFT)

clean:
	@rm -rvf $(OBJ) *.o

fclean: clean
	@cd MyLIBFT && make fclean
	@rm -rvf $(NAME)

re:
	@make fclean all

.PHONY: clean fclean all re
