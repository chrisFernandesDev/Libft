#include "libft.h"
/*
	É responsável por criar um novo nó para uma lista encadeada. 
	Aloca memória para o nó, inicializa o content com um valor 
	passado como argumento e define o ponteiro next como NULL
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list));
	if (!str)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}
/*
int	main(void)
{
	char	*str = "banana bolt";
	t_list	*i = ft_lstnew((void *)str);
	printf("%s\n", (char *)i->content);
	free(i);
	return (0);
}
*/