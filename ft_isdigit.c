/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:12:01 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/21 14:12:01 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	Verifica se um caractere é um dígito
	retorna 1 se verdadeiro, 0 se falso
*/
int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}
/*
int		main(void)
{
	printf("%d\n", ft_isdigit('2'));
	return (0);
}
*/