/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilsed <wilsed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:14:18 by wisedeau          #+#    #+#             */
/*   Updated: 2025/05/09 01:44:47 by wilsed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	size_s;

	size_s = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (size_s + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, size_s + 1);
	return (str);
}

/* int	main(void)
{
	//char *test;
	//test = ft_strdup("hm");
	printf("%s", ft_strdup(NULL));
	return(0);
} */
