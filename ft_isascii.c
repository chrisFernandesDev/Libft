#include "libft.h"
int     ft_isascii(int nbr)
{
	if (nbr >= 0 && nbr <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int		main(void)
{
	printf("É da tabela ASCII %d", ft_isascii(122));
	printf("\nNão é da tabela ASCII %d", ft_isascii(128));
	return (0);
}
*/