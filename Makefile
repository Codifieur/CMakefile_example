##
## Makefile
## File description:
## Makefile for basic project
##

NAME        =	binary

NAME_T	    =	unit_tests

LIB		    =	-lmy

LIB_DIR	    =	lib/my/

INCLUDE	    =	include/

CFLAGS	    =	-W -Wall -Wextra -Werror -I $(INCLUDE)

CC		    =	gcc

SRC_M		=	src/main.c			        \

SRC 		=	src/operation.c		        \

SRC_T		=	tests/tests_operation.c		\

OBJ		    =	$(SRC:.c=.o) $(SRC_M:.c=.o)

OBJ_T 	    =	$(SRC:.c=.o) $(SRC_T:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB_DIR)
	$(CC) -o $(NAME) -L $(LIB_DIR) $(LIB) $(FLAGS) $(OBJ)

clean:
	make clean -C $(LIB_DIR)
	rm -f $(OBJ)
	rm -f $(OBJ_M)
	rm -f $(OBJ_T)

fclean:	clean
	make fclean -C $(LIB_DIR)
	rm -f $(NAME)
	rm -f $(NAME_T)
	find . -name "*.gcda" -type f -delete
	find . -name "*.html" -type f -delete
	find . -name "*.gcno" -type f -delete

tests_run: 	CFLAGS += --coverage

tests_run:	$(OBJ_T)
	make -C ./lib/my
	$(CC) -o $(NAME_T) $(OBJ_T) $(CFLAGS) -L./lib/my -lmy -lcriterion
	./$(NAME_T)

cov:	tests_run
	gcovr -r . --html -o coverage.html --html-details -e "tests"

re:	fclean all
