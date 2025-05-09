#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/* int	main(void)
{
	//Cas 1 : écrire dans le terminal (stdout, fd = 1)
	ft_putstr_fd("Ceci est écrit dans le terminal.\n", 1);

	//Cas 2 : écrire dans un fichier
	// int fd = open("test_putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	// if (fd == -1)
	// {
	// 	write(2, "Erreur ouverture\n", 17); // stderr
	// 	return (1);
	// }
	// ft_putstr_fd("Ceci est écrit dans un fichier.\n", fd);
	// close(fd);

	return (0);
}*/
