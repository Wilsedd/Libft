#include "libft.h"

static void	free_split(char **words, size_t j)
{
	while (j > 0)
	{
		j--;
		free(words[j]);
	}
	free(words);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*split_word(const char *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	combine_words(char **words, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = split_word(&s[i], c);
			if (!words[j])
			{
				free_split(words, j);
				return (0);
			}
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words)
		return (NULL);
	if (!combine_words(words, s, c))
		return (NULL);
	return (words);
}

/* int main(void)
{
	i = 0;
	tab = ft_split("   je  suis ici   ", ' ');
	if (!tab)
		return (1);
	while (tab[i])
	{
		printf("mot %zu : \"%s\"\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
