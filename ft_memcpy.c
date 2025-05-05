/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilsed <wilsed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:00:19 by wisedeau          #+#    #+#             */
/*   Updated: 2025/05/05 01:08:24 by wilsed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	dest = d;
	return (dest);
}

/*
int	main(void)
{
	char	dest[] = "je suis";
	char	src[] = "tu";
	size_t 	len = 2;

	ft_memcpy(dest, src, len);
	printf("%s\n", dest);

	return (0);
} */

/*
int	main(void)
{
	int src[100] = {11,21,31,41,51,61,71,81,91};
	int dest[100] = {0,0,0,0,0,0,0,0,0};

	int i = 0;
	while(i < 9)
	{
		printf("%d, ", src[i]);
		i++;
	}
	printf("\n");
	ft_memcpy(&dest[0], &src[0], 8);
	i = 0;
	while(i < 9)
	{
		printf("%d, ", dest[i]);
		i++;
	}
}*/