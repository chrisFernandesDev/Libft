/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:37:35 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/31 11:20:09 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
	Retorna um ponteiro para a primeira ocorrência,
	a função retorna NULL se o caractere especificado
	não for encontrado.
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (NULL);
}
/*
int	main(void)
{
	const	char *s = "42Porto";
	char	c = 'P';
	printf("%s", ft_strchr(s, c));
	return (0);
}
*/