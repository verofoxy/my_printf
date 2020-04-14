##
## EPITECH PROJECT, 2019
## dklejf
## File description:
## jedrfh
##

SRC	=	src/my_printf.c		\
		src/my_putchar.c	\
		src/my_put_nbr.c	\
		src/my_putstr.c		\
		src/my_strlen.c		\
		src/operations_printf.c

CPPFLAGS =	-I ./include -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

all:	$(NAME)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: 	fclean all

.PHONY: all clean fclean
