#include "libft.h"

int     ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}
/*
int		main(void)
{
	printf("%d\n", ft_isdigit('2'));
	return (0);
}
*/