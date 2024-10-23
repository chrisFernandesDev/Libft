#include "libft.h"
/*
	Function that writes a character
*/
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	c = 'c';
	ft_putchar_fd(c, 1);
	return (0);
}
*/