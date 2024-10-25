/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:32:04 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:32:04 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *) dest)[n - 1] = ((unsigned char *) src)[n - 1];
			n--;
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "morango melancia";
	char	src[] = "banana uva";
	ft_memmove(dest, src, 10);
	printf("Meu: %s\n", dest);
	//printf("Original %s", (char *)memmove(dest, src, 10));
	return (0);
}
*/