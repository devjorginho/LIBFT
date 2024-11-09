# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 13:57:51 by jluiz-de          #+#    #+#              #
#    Updated: 2024/11/08 13:59:01 by jluiz-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# 						----  My Makefile file  ----						   #

NAME = libft.a
CC = clang
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_itoa.c ft_putchar_fd.c \
			ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_putstr_fd.c \
			ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strmapi.c ft_substr.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_strjoin.c \
			ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_striteri.c \
			ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c

OBJ = $(SOURCE:.c=.o)			

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast
#ft_lstadd_back.c  \
#.c ft_lstdelone.c ft_lstclear.c
#B_OBJ = $(BONUS:.c=.o)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

bonus: $(B_OBJ)
	ar -rc $(NAME) $(B_OBJ)

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re main bonus
