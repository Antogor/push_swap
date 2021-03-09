NAME = checker

INCLUDES = MyLIBFT/libft/libft.h

FLAGS = gcc

FUN = test.c

OBJ = $(FUN:.c=.o)

LIBFT = MyLIBFT/libft.a
MYLIBFT = MyLIBFT/

all: $(NAME)

$(LIBFT): 
	@$(MAKE) -C $(MYLIBFT)

$(NAME): $(OBJ) $(LIBFT) $(INCLUDES)
	@$(FLAGS) $(FUN) $(LIBFT) -o $(NAME)
