/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:01:49 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/31 11:27:30 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Retorna um ponteiro para a primeira ocorrência,
	a função retorna NULL se o caractere especificado
	não for encontrado. Igual a strchr(), mas encontra
	a última ocorrência de c
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	int		i;

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