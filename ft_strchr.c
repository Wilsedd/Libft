#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "abcacca";

	printf("%s\n", ft_strchr(str, 'd'));
	return (0);
}
 */