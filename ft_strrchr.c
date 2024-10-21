/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:01:49 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/21 16:19:55 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*result;

	i = 0;
	result = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = ((char *) &s[i]);
		}
		i++;
	}
	return (result);
}

int	main(void)
{
	const	char *s = "42Porto";
	char	c = 'o';
	printf("%s", ft_strrchr(s, c));
	return (0);
}

//Arrumar este codigo