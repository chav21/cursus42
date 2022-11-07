NAME	= libft.a

SRC	= ft_isalpha.c 

FLAGS = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar -cr $(NAME) *.O
	ranlib $(NAME)

clean:
	/bin/rm -f *.O

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all