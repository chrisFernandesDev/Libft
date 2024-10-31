/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:33:15 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:33:15 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	retorna o número de caracteres antes do caractere de
	terminação NULl( \0) da string
*/
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_strlen(argv[1]));
	return (0);
}
*/