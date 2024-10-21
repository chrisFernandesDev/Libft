/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:37:35 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/21 16:12:05 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	Returns a pointer to the first occurrence, the function returns NULL
	if the specified charater is not found
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const	char *s = "42Porto";
	char	c = 'e';
	printf("%s", ft_strchr(s, c));
	return (0);
}
*/