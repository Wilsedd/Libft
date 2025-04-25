/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:20:02 by wisedeau          #+#    #+#             */
/*   Updated: 2025/04/25 18:59:49 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = str;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	char str[] = "je suis";
	size_t len = 3;
	int i = 0;

	ft_bzero(str, len);
	while (i < 8)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}*/