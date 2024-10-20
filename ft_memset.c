#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		n--;
	}
	return (s);
}
/*
int     main(void)
{
	char str[10];
	int	s = 'a';
	ft_memset(str, s, 5);
	str[5] = '\0';
	printf("%s", str);
	return (0);
}
*/