#include "libft.h"

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/* 
int main(void)
{
	printf("%d", ft_tolower('D'));
	return (0);
}
 */