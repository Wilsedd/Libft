#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// main avec fonction f = ft_maj
/* void ft_maj(unsigned int i, char *c)
{
	if (i % 2 == 1)
		*c = toupper(*c);
}

int	main(void)
{
	char str[] = "hello world!";

	printf("Avant  : %s\n", str);
	ft_striteri(str, &ft_maj);
	printf("Après  : %s\n", str);

	return (0);
} */
// la difference entre striteri et strmapi est que
// strmapi ne modifie pas s et renvoie une nouvelle chaine malloc precedement
// alors que striteri modifie la chaine s directement