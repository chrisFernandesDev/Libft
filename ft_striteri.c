/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:33:02 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:33:02 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Isso aplica uma função a cada caractere em uma string
*/

/*
void	ft_strtemp(unsigned int c, char *s)
{
	(void)c;
	write(1, s, 1);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "banana";
	ft_striteri(str, ft_strtemp);
	return (0);
}
*/