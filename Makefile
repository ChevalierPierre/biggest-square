##
## EPITECH PROJECT, 2017
## EPITECH
## File description:
## Makefile screensaver
##

CC	=	gcc

CFLAGS	+=	-Wextra -Wall -W

CFLAGS	+=	-Iinclude

CRIFLAGS	+=	-lcriterion

CRIFLAGS	+=	-lgcov

RM	=	rm -f

NAME	=	bsq

SRC	=	$(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

TEST	=	unit_tests

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)
	$(RM) $(TEST)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) vgcore*
	$(RM) *.o
	$(RM) *~


re:	fclean all

tests_run:
		$(CC) --coverage -c tests/*.c
		$(CC) *.o -lcriterion -lgcov -o $(TEST)
		./$(TEST)

.PHONY:	all clean fclean re
