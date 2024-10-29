/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:24:36 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/29 19:24:36 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Retorna o ultimo elemento da lista
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*list = ft_lstnew("banana");
	ft_lstadd_front(&list, ft_lstnew("uva"));
	ft_lstadd_front(&list, ft_lstnew("morango"));
	ft_lstadd_front(&list, ft_lstnew("pera"));
	printf("%s\n",(char *) list->content);
	return (0);
}
*/

//Rever este código