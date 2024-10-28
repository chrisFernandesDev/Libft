#include "libft.h"
/*
	Adiciona um item no inicio da lista
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*list = ft_lstnew("banana");
	ft_lstadd_front(&list, ft_lstnew("uva"));
	ft_lstadd_front(&list, ft_lstnew("Morango"));
	while (list)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}
	return (0);
}
*/