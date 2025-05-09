#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

// MAIN :
// Fonction utilisée par lstdelone pour libérer le content
/* void	del_content(void *content)
{
	free(content); // on suppose que content a été malloc
}

int	main(void)
{
	char	*str;
	t_list	*node;

	// On duplique une chaîne avec strdup, donc à free plus tard
	str = ft_strdup("Salut !");
	if (!str)
		return (1);
	// On crée un maillon dont le contenu est cette chaîne
	node = ft_lstnew(str);
	printf("Avant suppression : %s\n", (char *)node->content);
	// On supprime le maillon avec la fonction ft_lstdelone
	ft_lstdelone(node, del_content);
	printf("Maillon supprimé !\n");
	return (0);
} */

// lst: ici est un maillon unique de la liste (pas la liste entiere)
// del: une fonction qui sait liberer le content du maillon
