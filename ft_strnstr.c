/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:33:34 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:33:34 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	The function find a substring within a string, 
	but limiting the search to a specific
	number of characters.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) big + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strnstr(argv[1], argv[2], 4));
	return (0);
}
*/