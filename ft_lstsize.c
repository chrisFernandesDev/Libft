#include "libft.h"
/*
	Conta quantos elementos temos na lista
*/
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*list = ft_lstnew("banana");
	ft_lstadd_front(&list, ft_lstnew("uva"));
	ft_lstadd_front(&list, ft_lstnew("morango"));
	ft_lstadd_front(&list, ft_lstnew("pera"));
	printf("%d\n", ft_lstsize(list));
	return (0);
}
*/

//Rever este código