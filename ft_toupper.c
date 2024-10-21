#include "libft.h"

int     ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}
/*
int     main(void)
{
    char    c;

    c = 'c';
    printf("%c", ft_toupper(c));
    return (0);
}
*/