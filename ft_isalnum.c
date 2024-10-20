#include "libft.h"

int     ft_isalnum(int nS)
{
	if ((nS >= 'a' && nS <= 'z') || (nS >= 'A' && nS <= 'Z') || (nS >= '0' && nS <= '9'))
        return (1);
    return (0);
}
/*
int		main(void)
{
	printf("%d\n", ft_isalnum('.'));
	return (0);
}
*/