/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:15:07 by wisedeau          #+#    #+#             */
/*   Updated: 2025/05/05 15:26:04 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	// Ajuster len si s + start + len dépasse la fin de s
	if (len > len_s - start)
		len = len_s - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';

	return (str);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}


int	main(void)
{
	char	*str;
	char	*sub;

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

	// Cas avec chaîne vide
	sub = ft_substr("", 0, 5);
	if (sub)
	{
		printf("Substr(\"\", 0, 5) = \"%s\"\n", sub);
		free(sub);
	}

	return (0);
}