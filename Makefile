NAME = checker

INCLUDES = push_swap.h ./MyLIBFT/libft/libft.h

FLAGS = gcc -Ig -g

FUN = checker.c instructions.c

OBJ = $(FUN:.c=.o)

LIBFT = ./MyLIBFT/libft.a
MYLIBFT = ./MyLIBFT/

all: $(NAME)

$(LIBFT): 
	@$(MAKE) -C $(MYLIBFT)

$(NAME): $(OBJ) $(LIBFT) $(INCLUDES)
	@$(FLAGS) $(FUN) $(LIBFT) -L$(MYLIBFT) -o $(NAME)
