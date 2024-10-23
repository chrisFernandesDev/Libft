/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:01:49 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/21 16:19:55 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns a pointer to the first occurrence, the function returns NULL
	if the specified charater is not found. Equal strchr(), but finds the last occurrence of c
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*result;

	i = 0;
	c = (unsigned char)c;
	result = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			result = ((char *) &s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return (result);
}
/*
int	main(void)
{
	const	char *s = "42Porto";
	char	c = 'P';
	printf("%s", ft_strrchr(s, c));
	return (0);
}
*/