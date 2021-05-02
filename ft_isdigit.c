#include "libft.h"

int	ft_isdigit(int ch)
{
	int	res;

	res = 0;
	if (57 >= ch && ch >= 48)
		res = 1;
	return (res);
}
/*
int	main(void)
{
	int	a = 58;
	int	b = 58;
	printf("%d\n", isdigit(a));
	printf("%d\n", ft_isdigit(b));
}
*/
