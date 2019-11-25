##
## Makefile
## File description:
## Makefile for lib
##

SRC	=	my_putchar.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

INCLUDE_FILES	=	my.h

INCLUDE_DIR		= 	../../include/

LIB_DIR		=	../

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) $(LIB_DIR)
	cp $(INCLUDE_FILES) $(INCLUDE_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB_DIR)$(NAME)

re:	fclean all
