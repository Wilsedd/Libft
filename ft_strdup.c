
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
	printf("%s", ft_strdup("hm"));
	return(0);
} */