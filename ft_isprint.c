#include "libft.h"

int	ft_isprint(int ch)
{
	int	res;

	res = 0;
	if (126 >= ch && ch >= 32)
		res = 1;
	return (res);
}
/*
int	main(void)
{
	int	a = 31;
	int	b = 31;
	printf("%d\n", isprint(a));
	printf("%d\n", ft_isprint(b));
}
*/
