#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (!lst)
		return (NULL);
	node = lst;
	while (node->next != NULL)
	{
		node = node->next;
	}
	return (node);
}

/* int	main(void)
{
	t_list *a = ft_lstnew("1er");
	t_list *b = ft_lstnew("2e");
	t_list *c = ft_lstnew("3e");

	a->next = b;
	b->next = c;

	t_list *last = ft_lstlast(a);
	if (last)
		printf("Dernier maillon : %s\n", (char *)last->content);
	else
		printf("La liste est vide.\n");

	return (0);
} */
