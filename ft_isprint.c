#include "libft.h"

int     ft_isprint(int nbr)
{
    if (nbr >= 32 && nbr <= 126)
    {
        return (1);
    }
    return (0);
}
/*
int     main(void)
{
    printf("%d", ft_isprint('\n'));
    printf("\n%d", ft_isprint(65));
    return (0);
}
*/