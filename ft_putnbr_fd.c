#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

/* int	main(void)
{
	//Cas 1 : écrire dans le terminal
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1); // test INT_MIN
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	//Cas 2 : écrire dans un fichier
	// int fd = open("test_putnbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	// if (fd == -1)
	// {
	// 	write(2, "Erreur ouverture\n", 17);
	// 	return (1);
	// }

	// ft_putnbr_fd(123456, fd);
	// ft_putchar_fd('\n', fd);
	// ft_putnbr_fd(-98765, fd);
	// ft_putchar_fd('\n', fd);

	// close(fd);
	return (0);
} */
