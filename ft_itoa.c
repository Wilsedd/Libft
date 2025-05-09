#include "libft.h"

static int	ft_count_decimal(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_fill_tab(long int nb, int len, char *str)
{
	str[len] = '\0';
	len--;
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			len;
	char		*str;

	nb = n;
	len = ft_count_decimal(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fill_tab(nb, len, str);
	return (str);
}

/* int main(void)
{
	char *str;

	// Test 0
	str = ft_itoa(0);
	printf("ft_itoa(0)          = \"%s\"\n", str);
	free(str);

	// Test positif simple
	str = ft_itoa(42);
	printf("ft_itoa(42)         = \"%s\"\n", str);
	free(str);

	// Test négatif simple
	str = ft_itoa(-42);
	printf("ft_itoa(-42)        = \"%s\"\n", str);
	free(str);

	// Test avec un seul chiffre
	str = ft_itoa(7);
	printf("ft_itoa(7)          = \"%s\"\n", str);
	free(str);

	// Test négatif avec un seul chiffre
	str = ft_itoa(-3);
	printf("ft_itoa(-3)         = \"%s\"\n", str);
	free(str);

	// Test INT_MAX
	str = ft_itoa(INT_MAX);
	printf("ft_itoa(INT_MAX)    = \"%s\"\n", str);
	free(str);

	// Test INT_MIN
	str = ft_itoa(INT_MIN);
	printf("ft_itoa(INT_MIN)    = \"%s\"\n", str);
	free(str);

	// Test avec nombre qui finit par 0
	str = ft_itoa(140);
	printf("ft_itoa(140)        = \"%s\"\n", str);
	free(str);

	return (0);
} */
