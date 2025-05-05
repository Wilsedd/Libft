/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:17:48 by wisedeau          #+#    #+#             */
/*   Updated: 2025/05/05 12:02:22 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb_element, size_t size)
{
	void	*array;

	if (size && nb_element > (SIZE_MAX / size))
		return (NULL);
	array = (void *)malloc(nb_element * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nb_element * size);
	return (array);
}

/* int	main(void)
{
	size_t	nb = SIZE_MAX;
	size_t	sz = 2;

	void *ptr1 = calloc(nb, sz);
	if (ptr1 == NULL)
		printf("calloc a échoué ou a protégé (rare)\n");
	else
	{
		printf("calloc a réussi (mais risque d'overflow !)\n");
		free(ptr1);
	}

	void *ptr2 = ft_calloc(nb, sz);
	if (ptr2 == NULL)
		printf("ft_calloc a bien détecté l'overflow\n");
	else
	{
		printf("ft_calloc a échoué (mais c'était prévu !)\n");
		free(ptr2);
	}

	return 0;
} */