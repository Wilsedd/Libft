/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:17:48 by wisedeau          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:57 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb_element, size_t size)
{
	void	*array;

	array = (void *)malloc(nb_element * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nb_element * size);
	return (array);
}

/* int	main(void)
{
	int *arr = (int *)calloc(5, sizeof(int));
	if (arr)
	{
		for (int i = 0; i < 5; i++)
			printf("%d ", arr[i]);
		free(arr);
	}
	return (0);
} */
 