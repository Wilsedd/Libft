#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[] = "abc";
	char *s = ft_strrchr(str, 'b');
	if (s)
		printf("%s\n", s);
	else
		printf("Not Found\n");
	return (0);
} */