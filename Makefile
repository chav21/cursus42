# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 18:07:23 by jacarras          #+#    #+#              #
#    Updated: 2022/11/29 18:47:49 by jacarras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC	=			ft_isalpha.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_split.c \

SRCS_BONUS =	ft_lstnew_bonus.c \
	

OBJS =	$(SRC:.c=.o)
BONUS = $(SRCS_BONUS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) $(SRCS_BONUS)
	ar -cr $(NAME) $(OBJS) $(BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

