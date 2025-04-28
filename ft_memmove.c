/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:09:17 by wisedeau          #+#    #+#             */
/*   Updated: 2025/04/28 17:50:59 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	i = -1;
	dest = d;
	src = s;
	if (d == NULL && s == NULL)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest[i] = src[i];
		}
	}
	else
	{
		while (++i < n)
			dest[i] = src[i];
	}
	return (d);
}
/*
int	main(void)
{
	//copie chevaucher
	char str[50] = "Bonjour, je suis en train de coder.";

	printf("Avant : %s\n", str);

	// Exemples de test :
	// Copier une partie de la chaîne vers une position différente
	ft_memmove(str + 8, str, 7);  // On copie "Bonjour" à partir de str[8]

	printf("Après : %s\n", str);

	return (0);

	//Copie normal :
	char src[] = "Coucou";
	char dest[20] = "XXXXXXXXXXXX";
		// Un tableau vide pré-rempli pour voir la copie

	printf("Avant : %s\n", dest);

	ft_memmove(dest, src, 6);
		// Copier "Coucou" dans dest (6 caractères sans le '\0')

	printf("Après : %s\n", dest);

	return (0);
}*/
