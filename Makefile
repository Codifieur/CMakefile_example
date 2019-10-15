##
##
## Makefile
## File description:
## Makefile for basic project
##

SRC		=	src/main.c			\

NAME	=	binary

FLAGS	=	-W -Wall -Wextra -Werror

LIB		=	-lmy

LIB_DIR	=	lib/my/

INCLUDE	=	include/

CC		=	gcc

all:	$(NAME)

$(NAME):
	make -C $(LIB_DIR)
	$(CC) -o $(NAME) $(SRC) -L $(LIB_DIR) $(LIB) -I $(INCLUDE) $(FLAGS)

clean:
	rm -f *~ *#

fclean:	clean
	rm -f $(NAME)

re:	fclean all
