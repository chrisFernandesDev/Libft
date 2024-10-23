#include "libft.h"
/*
	Function that writes a string and add a newline in final
*/
void ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*str = "Banana";
	ft_putendl_fd(str, 1);
	return (0);
}
*/