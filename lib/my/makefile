##
## EPITECH PROJECT, 2021
## emacs
## File description:
## makefile
##


SRC	=	$(wildcard *.c)

OBJ 	=	$(SRC:.c=.o)

NAME 	=	libmy.a

CFLAGS	=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc ../$(NAME) $(OBJ)
	cp my.h ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

