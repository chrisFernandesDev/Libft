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
		ft_striteri.c ft_strmapi.c ft_itoa.c

OBJ = $(SRC:.c=.o)

## Set the compiler and compilation flags ##
CC = cc
CFLAGS = -Wall -Wextra -Werror
##AR    = ar 
##ARFLAGS    = -rcs

## Rule all ##
all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
##$(NAME): $(OBJ)
##	$(AR)  $(ARFLAGS) $(NAME) $(OBJ)

##%.o: %.c
##	$(CC) $(CFLAGS) -c $< -o $@
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