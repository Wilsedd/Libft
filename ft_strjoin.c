#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, (len1 + 1));
	ft_strlcpy((str + len1), s2, (len2 + 1));
	return (str);
}

/* int	main(void)
{
	const char *s1 = "Hello, ";
	const char *s2 = "World!";
	char *str = ft_strjoin(s1, s2);

	if (str)
	{
		printf("Resultat : \"%s\"\n", str);
		free(str);
	}
	else
	{
		printf("Erreur : ft_strjoin a retourne NULL\n");
	}
	return (0);
} */
