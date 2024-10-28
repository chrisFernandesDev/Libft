#include "libft.h"
/*
	Apaga toda a lista
*/
void	del(void *content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*allnode;
	t_list	*nextnode;

	if (lst == NULL || *lst == NULL)
		return ;
	allnode = *lst;
	while (allnode != NULL)
	{
		nextnode = allnode->next;
		del(allnode->content);
		free(allnode);
		allnode = nextnode;
	}
	*lst = nextnode;
}
/*
int	main(void)
{
	t_list	*list = ft_lstnew(ft_strdup("banana"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("pera")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("melao")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("manga")));
	printf("\nAntes de retirar da lista:\n");
	t_list *temp = list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&list, del);
	printf("\nLista depois da retirada:");
	if (list == NULL)
	{
		printf("\nLista vazia!\n");
	}
	
	return (0);
}
*/