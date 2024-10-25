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
	Checks if a char is digit
	returns 1 if true, 0 if false 
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