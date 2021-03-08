NAME = checker

INCLUDES = ./MyLIBFT/libft/libft.h

FLAGS = gcc -I

FUN = test.c

OBJ = $(FUN:.c=.o)

LIBFT = ./MyLIBFT/libft.a
MYLIBFT = ./MyLIBFT/

all: $(NAME)

$(LIBFT): 
	@$(MAKE) -C ./MyLIBFT/

$(NAME): $(OBJ) $(LIBFT) $(INCLUDES)
	@$(FLAGS) $(FUN) $(LIBFT) -L$(MYLIBFT) #-o $(NAME)
