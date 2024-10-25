/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:18:56 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 15:57:16 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Retorna uma substring da string s passada como parâmetro.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*str;

	slen = ft_strlen(s);
	str = NULL;
	if (s == NULL)
		return (NULL);
	if (start + len > slen)
	{
		str = (char *)malloc(slen + 1);
		while (len > 0)
		{
			str = s[start];
			len--;
		}
	}
	return (str);
}

int	main(void)
{
	
	return (0);
}