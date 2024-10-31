/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:30:35 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:40:25 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Função que é usada para alocar memória dinamicamente, 
	mas com uma função importante diferença: além de alocar 
	memória, ele também inicializa todos os bytes para zero
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)malloc((nmemb * size));
	if (tmp == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
/*
int	main(void)
{
	void	*ptr = ft_calloc(5, 15);
	//void	*ptr2 = calloc(5, 15);
	printf("Meu: %p\n", ptr);
	//printf("Do sistema: %p\n", ptr2);
	//free(ptr);
	//free(ptr2);
	return (0);
}
*/
