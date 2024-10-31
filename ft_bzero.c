/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:30:20 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:37:02 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Esta função escreve n (tamanho) no valor c na string s.
	Com a diferenca que sempre sera 0.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	char str[] = "Banana";
	ft_bzero(str + 2, 4);
	printf("%s\n", str);
	return (0);
}
*/
