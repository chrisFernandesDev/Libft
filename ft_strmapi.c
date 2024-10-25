#include "libft.h"
/*
	its purpose is to apply a function to each character in a string, 
	resulting in a new string
*/
/*
char	ft_strtemp(unsigned int c, char s)
{
	(void)c;
	write(1, &s, 1);
	return (s);
}
*/
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return NULL;
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	str[] = "banana";
	ft_strmapi(str, ft_strtemp);
	return (0);
}
*/