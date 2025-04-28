/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:36:28 by wisedeau          #+#    #+#             */
/*   Updated: 2025/04/28 19:04:48 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	char	src[] = "je suis la";
	char	dest[50] = "aaaa";
	size_t	size;

	size = 8;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	return (0);
} */
// strlcpy sert à copier une chaîne de caractères dans une autre,
// tout en étant sûr de ne pas dépasser la taille prévue et en garantissant 
// toujours que la destination soit terminée par \0.
