/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:31:50 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:31:50 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Function searches for a character in a string, and works with byte strings
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

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