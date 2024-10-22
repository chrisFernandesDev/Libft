#include "libft.h"

/*
	Function searches for a character in a string, and works with byte strings
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	c = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const	char *s = "42Porto";
	char	c = 'P';
	const	char *result = ft_memchr(s, c, 3);
	printf("%s", result);
	return (0);
}
*/