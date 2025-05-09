#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	if (!lst || !new_node)
		return ;
	new_node->next = *lst;
	*lst = new_node;
}

/* int main(void)
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("B");
	t_list *node2 = ft_lstnew("A");

	ft_lstadd_front(&list, node1);
	// list => node 1 = content : "B" next : NULL
	ft_lstadd_front(&list, node2);
	// list => node2 = content : "A" next : node 1 → node1 
	
	printf("1er élément : %s\n", (char *)list->content);       // "A"
	printf("2e élément : %s\n", (char *)list->next->content);  // "B"
} */

// list est la tete de la liste chainee,
// grace a ce pointeur on peux parcourir toute la liste avec les next
// et ft_lstadd_front rajoute une node au tout debut de la chaine
// list pointera vers cette nouvelle node et celle ci pointera vers
// celle qui exister deja si c'etait le cas
