#include "libft.h"

int	ft_isascii(int ch)
{
	int	res;

	res = 0;
	if (127 >= ch && ch >= 0)
		res = 1;
	return (res);
}
/*
int	main(void)
{
	int	a = 128;
	int	b = 128;
	printf("%d\n", isascii(a));
	printf("%d\n", ft_isascii(b));
}
*/
