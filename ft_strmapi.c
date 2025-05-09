#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	slen;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (slen + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// main avec fonction f = ft_maj
/* char	ft_maj(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (char)toupper(c); // Majuscule si index pair
	return (c); // Sinon inchangé
}

int	main(void)
{
	char *original = "hello world!";
	char *result = ft_strmapi(original, &ft_maj);

	if (result)
	{
		printf("Original : %s\n", original);
		printf("Transformé : %s\n", result);
		free(result);
	}
	else
		printf("Erreur d'allocation.\n");

	return (0);
} */
// a retenir le fait que dans le protype char (*f)(unsigned int, char)
// il n'y a pas de nom est normal. Car on a pas besoin de nommer de les
// parametres dans un protype de fonction pointeur
// enfaite meme les fonction sont stocker a une adresse memoire
