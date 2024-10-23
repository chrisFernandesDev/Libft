#include "libft.h"
/*
	Function that writes a string
*/
void ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	*str = "Banana";
	ft_putstr_fd(str, 1);
	return (0);
}
*/