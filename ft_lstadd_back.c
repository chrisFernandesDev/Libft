#include "libft.h"
/*
	Adicionar um novo elemento ao final de uma lista
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}
/*
int	main(void)
{
	t_list	*list = ft_lstnew("banana");
	ft_lstadd_back(&list, ft_lstnew("pera"));
	ft_lstadd_back(&list, ft_lstnew("melao"));
	ft_lstadd_back(&list, ft_lstnew("manga"));
	while (list)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}
	return (0);
}
*/