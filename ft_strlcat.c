#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  len_dest;
    size_t  len_src;

    len_dest = ft_strlen(dest);
    len_src = ft_strlen(src);
    i = len_dest;
    j = 0;
    if (size <= len_dest)
        return (size + len_src);
    while (src[j] != '\0' && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (len_dest + len_src);

    //Refazer esse código!
}

int     main(void)
{
    char    dest[20] = "banana ";
    char    src[] = "uva";
    ft_strlcat(dest, src, 9);
    printf("%s", dest);
    return (0);
}