/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilsed <wilsed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:15:07 by wisedeau          #+#    #+#             */
/*   Updated: 2025/05/06 18:09:38 by wilsed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/* int	main(void)
{
	char *str;
	char *sub;

	str = "Hello Wo123456";
	// Cas classique
	sub = ft_substr(str, 7, 5);
	if (sub)
	{
		printf("Substr(7, 5) = \"%s\"\n", sub);
		free(sub);
	}
	// Cas où start >= strlen(str)
	sub = ft_substr(str, 100, 10);
	if (sub)
	{
		printf("Substr(100, 10) = \"%s\"\n", sub);
		free(sub);
	}
	// Cas où len dépasse la fin
	sub = ft_substr(str, 10, 50);
	if (sub)
	{
		printf("Substr(10, 50) = \"%s\"\n", sub);
		free(sub);
	}
	// Cas avec len = 0
	sub = ft_substr(str, 5, 0);
	if (sub)
	{
		printf("Substr(5, 0) = \"%s\"\n", sub);
		free(sub);
	}
	Cas avec chaîne vide
	sub = ft_substr("", 0, 5);
	if (sub)
	{
		printf("Substr(\"\", 0, 5) = \"%s\"\n", sub);
		free(sub);
	}
	// Cas si s = NULL
	sub = ft_substr(NULL, 0, 5);
	if (sub)
	{
		printf("Résultat : %s\n", sub);
		free(sub);
	}
	return (0);
} */
