#include "libft.h"
/*
	This apply a function to each character in a string
*/

/*
void	ft_strtemp(unsigned int c, char *s)
{
	(void)c;
	write(1, s, 1);
}
*/
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "banana";
	ft_striteri(str, ft_strtemp);
	return (0);
}
*/