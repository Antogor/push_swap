NAME = push_swap
INCLUDES = ./MyLIBFT/libft/libft.h ./src/headers/push_swap.h
SRC = ./src/push_swap.c ./src/engine/engine.c ./src/engine/rotate_instructions.c ./src/engine/swap_push_instructions.c \
	  ./src/utils/error.c ./src/utils/success.c ./src/utils/utils.c ./src/utils/validate.c 
CC = gcc
CFLAGS = -Ig -g
FUN = $(wildcard $(SRC)*.c)
OBJ = $(FUN:%.c=%.o)
LIBFT = ./MyLIBFT/libft.a
MYLIBFT = ./MyLIBFT/

all: $(NAME)

libft: 
	@$(MAKE) $(MYLIBFT)

$(NAME): $(OBJ) $(INCLUDES) libft
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

clean:
	@cd MyLIBFT && $(MAKE) clean
	@rm -rvf $(OBJ) *.o

fclean: clean
	@cd MyLIBFT && $(MAKE) fclean
	@rm -rvf $(NAME)

reLibft:
	@cd MyLIBFT && $(MAKE) re

reall: $(OBJ) $(INCLUDES)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

re: fclean reLibft reall

.PHONY: clean fclean all re
