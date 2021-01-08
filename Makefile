##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

MY	=	src/

SRC	=	./$(MY)*.c

CFLAGS += -lcsfml-window -lcsfml-graphics

NAME = 	my_runner

$(NAME):
		 gcc $(CFLAGS) -o $(NAME) $(SRC)

all:	$(NAME)

clean:
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re:	fclean all