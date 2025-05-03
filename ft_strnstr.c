#include "libft.h"

char	*ft_strnstr(const char *b, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	char	*big;

	i = 0;
	big = (char *)b;
	little_len = ft_strlen(little);
	if (little_len == 0 || big == little)
		return (big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] && (big[i + j] == little[j]) && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return (big + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char *big = "abcabcdabc";
	const char *little = "abcd";
	size_t len = 15;
	char *result = ft_strnstr(big, little, len);

	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	return (0);
} */