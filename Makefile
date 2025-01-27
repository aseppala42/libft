# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aseppala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 10:50:45 by aseppala          #+#    #+#              #
#    Updated: 2019/11/20 19:46:40 by aseppala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isspace.c ft_memset.c ft_strchr.c ft_strnew.c ft_isupper.c ft_putchar.c\
ft_strcmp.c ft_strnstr.c ft_atoi.c ft_lstadd.c ft_putchar_fd.c ft_strcpy.c\
ft_strrchr.c ft_bzero.c ft_lstiter.c ft_putendl.c ft_strdel.c ft_strstr.c\
ft_isalnum.c ft_memalloc.c ft_putendl_fd.c ft_strdup.c ft_strtrim.c ft_isalpha.c\
ft_memccpy.c ft_putnbr.c ft_strlcat.c ft_tolower.c ft_isascii.c ft_memcmp.c\
ft_putnbr_fd.c ft_strlen.c ft_toupper.c ft_isdigit.c ft_memcpy.c ft_putstr.c\
ft_strncat.c ft_islower.c ft_memdel.c ft_putstr_fd.c ft_strncmp.c ft_isprint.c\
ft_memmove.c ft_strcat.c ft_strncpy.c ft_itoa.c ft_lstmap.c ft_realloc.c\
ft_striter.c ft_strmap.c ft_strnequ.c ft_lstdel.c ft_lstnew.c ft_strclr.c\
ft_striteri.c ft_strmapi.c ft_strsplit.c ft_lstdelone.c ft_memchr.c ft_strequ.c\
ft_strjoin.c ft_strndup.c ft_strsub.c ft_chrjoin.c ft_strchrlen.c ft_strlcpy.c\
ft_strjoindel.c ft_strcount.c ft_itoafree.c
OBJ = $(SRC:.c=.o)
HDR = includes

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) -I $(HDR)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
