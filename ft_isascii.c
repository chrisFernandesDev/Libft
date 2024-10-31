/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:31:19 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:31:19 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Retorna 1 se o valor for entre 0 e 127 da tabela 
	ASCII, e 0 se for outros comandos
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("É da tabela ASCII %d", ft_isascii(122));
	printf("\nNão é da tabela ASCII %d", ft_isascii(128));
	return (0);
}
*/