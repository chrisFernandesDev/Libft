/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:31:11 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:31:11 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Retorna 1 se o valor for alfabetico e 0 se o valor
	nao for alfabetico.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	return (0);
}
*/