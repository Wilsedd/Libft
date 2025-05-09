#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	// Test 1 : Écrire dans le terminal (stdout)
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	return (0);
} */
