/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:39:08 by wisedeau          #+#    #+#             */
/*   Updated: 2025/05/03 17:39:09 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*str == ((unsigned char)c))
			return ((char *)str);
		str++;
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
 // Exemple de bloc mémoire à tester
	char str[] = "Hello, world!";
	int c = 'o';
	size_t size = 6;
	char *result = (char *)ft_memchr(str, c, size);

	if (result != NULL) {
		printf("Caractère '%c' trouvé à l'adresse : %p\n", c, result);
		printf("La chaîne restante est : \"%s\"\n", result);
	} else {
		printf("Caractère '%c' non trouvé .\n", c);
	}

	return (0);
} */
