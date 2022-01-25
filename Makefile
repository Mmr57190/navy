##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC =	$(wildcard src/*.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	navy

CFLAGS	=	-I./include/ -g -Wall -Wextra

LDFLAGS	=	-L./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ) lib/libmy.a
		$(CC) -o $(NAME) $(OBJ) $(CDFLAGS) $(LDFLAGS)

clean:
		$(RM) ./lib/my/*~
		$(RM) ./lib/my/*.o
		$(RM) *~
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		$(RM) ./lib/libmy.all

re:		fclean all

lib/libmy.a:
		$(MAKE) -C ./lib/my/

.Phony: all clean fclean re
