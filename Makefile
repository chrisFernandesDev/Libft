## File name ##
NAME = libft.a

## Define .c and .o files ##
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c

OBJ = $(SRC:.c=.o)

## Set the compiler and compilation flags ##
CC = cc
CFLAGS = -Wall -Wextra -Werror

## Rule all ##
all: $(NAME)
$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

## Clean rule ##
clean:
	rm -f $(OBJ)

## Fclean rule ##
fclean: clean
	rm -f $(NAME)

## Re rule ##
re: fclean all

## Phone rule ##
.PHONY: all clean fclean re