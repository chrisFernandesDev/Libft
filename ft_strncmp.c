/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:33:30 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:33:30 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Function that compares each character by its 
	corresponding ASCII values return 0 equals s1 and s2 
	in n, if the bytes are different, return the difference
	between the two characters. (String Compare)
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_strncmp(argv[1], argv[2], 4));
	return (0);
}
*/