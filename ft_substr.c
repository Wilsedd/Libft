#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t	i;
	size_t len_s;

	i = 0;
	len_s = ft_strlen(s);
	if(start >= len_s)
	{
		str = (char *)malloc(sizeof(char) * (1));
		if(str == NULL)
			return NULL;
	}
	else
	{
		str = (char *)malloc(sizeof(char) * ((len_s - start) + 1));
		if(str == NULL)
			return NULL;
		while(i < len && s[start + i])
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = '\0';	
	return str;
}
/* 
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}
 */