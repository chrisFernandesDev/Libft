/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:31:45 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:31:45 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Responsible for converting an integer (int) into 
	a string (or string of characters)
*/

int	ft_intlen(int n)
{
	long	nbr;
	int		i;

	i = 0;
	nbr = n;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= (-1);
		i++;
	}
	while (nbr >= 1)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		len;

	nbr = n;
	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (str);
}
/*
int	main(void)
{
	int	nbr = 42;
	int	nbr1 = -42;
	int	nbr2 = 0;
	printf("%s\n", ft_itoa(nbr));
	printf("%s\n", ft_itoa(nbr1));
	printf("%s\n", ft_itoa(nbr2));
	return (0);
}
*/