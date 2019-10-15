##
## Makefile
## File description:
## Makefile for basic project
##

SRC		=	src/main.c			\

NAME	=	binary

LIB		=	-lmy

LIB_DIR	=	lib/my/

INCLUDE	=	include/

CFLAGS	=	-W -Wall -Wextra -Werror -I $(INCLUDE)

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB_DIR)
	$(CC) -o $(NAME) -L $(LIB_DIR) $(LIB) $(FLAGS) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
