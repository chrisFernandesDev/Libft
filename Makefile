# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 11:31:03 by cmaciel-          #+#    #+#              #
#    Updated: 2024/10/25 11:31:03 by cmaciel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## File name ##
NAME = libft.a

## Define .c and .o files ##
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c\
		ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c \
		ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_striteri.c ft_strmapi.c ft_itoa.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstclear.c ft_lstiter.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

## Set the compiler and compilation flags ##
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR    = ar 
ARFLAGS    = -rcs

## Rule all ##
all: $(NAME)

$(NAME): $(OBJ)
	$(AR)  $(ARFLAGS) $(NAME) $(OBJ)

## Bonus part
bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

## Clean rule ##
clean:
	rm -f $(OBJ) $(OBJ_BONUS)

## Fclean rule ##
fclean: clean
	rm -f $(NAME)

## Re rule ##
re: fclean all

## Phone rule ##
.PHONY: all clean fclean re bonus