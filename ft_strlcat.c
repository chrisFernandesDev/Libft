/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:33:07 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:33:07 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	concatena duas strings, mas com um pequeno porém,
	ela sempre termina a string com NULL
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dest;
	j = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dest + len_src);
}
/*
int	main(void)
{
	char	dst[20] = "banana ";
	char	src[] = "uva";
	ft_strlcat(dst, src, 9);
	printf("%s", dst);
	printf("%s", dst);
	return (0);
}
*/