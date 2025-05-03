/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:37:34 by wisedeau          #+#    #+#             */
/*   Updated: 2025/05/03 17:37:38 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	j = dlen;
	while (src[i] && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

/*
int	main(void)
{
	char	src[] = "56789";
	char	dest[100] = "01234";
	size_t	result;
	size_t	size;

	//represente la taille total du tampon que dest devrait avoir normalement
	size = 11;
	result = ft_strlcat(dest, src, size);
	printf("Source : %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Taille de la source: %zu\n", result);
}
// si la valeur retourner par la fonction a la fin est = ou >
// a size c'est que la chaine src a ete tronquee
 */