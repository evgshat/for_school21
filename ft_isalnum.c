#include "libft.h"

int	ft_isalnum(int ch)
{
	int	res;

	res = 0;
	if ((90 >= ch && ch >= 65) || (97 <= ch && ch <= 122))
		res = 1;
	if (57 >= ch && ch >= 48)
		res = 1;
	return (res);
}
/*
int	main(void)
{
	int	a = 64;
	int	b = 64;
	printf("%d\n", isalnum(a));
	printf("%d\n", ft_isalnum(b));
}
*/
