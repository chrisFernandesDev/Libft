#include "libft.h"

int     ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}
/*
int     main(void)
{
    char    c;

    c = 'C';
    printf("%c", ft_tolower(c));
    return (0);
}
*/