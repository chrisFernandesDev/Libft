#include "libft.h"
/*
	Convert an integer n to characters (digits) and write these characters 
	to the fd file descriptor
*/
void ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= (-1);
		ft_putchar_fd('-', fd);
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + 48, fd);
}
/*
int	main(void)
{
	int	number = -549;
	ft_putnbr_fd(number, 1);
	return 0;
}
*/