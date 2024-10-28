#include "libft.h"
/*
	Deleta um item da lista
*/
void	del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
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
	t_list	*del_lst = list;
	list = list->next;
	ft_lstdelone(del_lst, del);
	printf("\nLista depois da retirada:\n");
	while (list)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}
	return (0);
}
*/
