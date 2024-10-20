#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t     i;
    size_t     j;

    i = 0;
    j = 0;
    while (src[j] != '\0')
        j++;
    if (size > 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (j);
}
/*
int     main(void)
{
    char    dest[20];
    char    src[] = "HelloWorld";
    ft_strlcpy(dest, src, 6);
    printf("%s", dest);
    return (0);
}
*/