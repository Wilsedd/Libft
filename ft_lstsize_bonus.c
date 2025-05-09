#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* int	main(void)
{
	t_list *list = NULL;

	// Création de quelques maillons
	t_list *a = ft_lstnew("node 1");
	t_list *b = ft_lstnew("node 2");
	t_list *c = ft_lstnew("node 3");

	// Chaînage des maillons
	a->next = b;
	b->next = c;

	list = a;

	// Appel de ta fonction
	int count = ft_lstsize(list);
	printf("Nombre de maillons dans la liste : %d\n", count); 
		// Doit afficher 3

	return (0);
} */
