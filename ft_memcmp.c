/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:31:56 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:31:56 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Compares memory blocks byte by byte. It can be used 
	to compare any data type, not just strings. 
	It is ideal for comparing byte arrays, structs or 
	any other arbitrary memory area. (Memory Compare)
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_memcmp(argv[1], argv[2], 4));
	return (0);
}
*/