/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisedeau <wisedeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:16:01 by wisedeau          #+#    #+#             */
/*   Updated: 2025/04/25 18:27:01 by wisedeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "je suis";
	size_t	len;

	len = 2;
	ft_memset(str, 'a', len);
	printf("%s\n", str);
	//affiche str apres
	memset(str, 'b', len);
	printf("%s\n", str);
}
 */
