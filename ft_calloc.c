#include "libft.h"
/*
	Function that is used to dynamically allocate memory, but with an important 
	difference: in addition to allocating memory, it also initializes all bytes to zero
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)malloc((nmemb * size));
	if (tmp == NULL)
		return NULL;
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
/*
int	main(void)
{
	void	*ptr = ft_calloc(5, 15);
	//void	*ptr2 = calloc(5, 15);
	printf("Meu: %p\n", ptr);
	//printf("Do sistema: %p\n", ptr2);
	//free(ptr);
	//free(ptr2);
	return (0);
}
*/