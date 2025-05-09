#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last_node;

	if (!lst || !new_node)
		return ;
	if (*lst)
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new_node;
	}
	else
		*lst = new_node;
}

/* int	main(void)
{
	t_list *list = NULL;

	// Création de 3 maillons
	t_list *node1 = ft_lstnew("A");
	t_list *node2 = ft_lstnew("B");
	t_list *node3 = ft_lstnew("C");

	// On ajoute à la fin
	ft_lstadd_back(&list, node1);  // list → A
	ft_lstadd_back(&list, node2);  // list → A → B
	ft_lstadd_back(&list, node3);  // list → A → B → C

	// Affichage de la liste
	t_list *tmp = list;
	while (tmp)
	{
		printf("Maillon : %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	return (0);
} */
