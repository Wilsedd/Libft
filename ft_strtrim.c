#include "libft.h"

// fonction qui permet de verifier les caractere de set
static int	ft_verif(char c, const char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	beg;
	size_t	end;
	size_t	slen;

	beg = 0;
	end = 0;
	if (!s1 || !set)
		return (NULL);
	slen = ft_strlen(s1);
	while (s1[beg] && ft_verif(s1[beg], set) == 1)
		beg++;
	while (s1[slen - end - 1] && ft_verif(s1[slen - end - 1], set) == 1)
		end++;
	str = ft_substr(s1, beg, slen - (beg + end));
	return (str);
}

/* int main(void)
{
	printf("%s", ft_strtrim("hello world", "ohrd"));
	return (0);
} */