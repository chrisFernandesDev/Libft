#include "libft.h"

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int     main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_strlen(argv[1]));
	return (0);
}
*/