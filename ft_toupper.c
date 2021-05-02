#include "libft.h"

int	ft_toupper(int ch)
{
	int	res;

	res = ch;
	if (97 <= ch && ch <= 122)
		res = ch - 32;
	return (res);
}
/*
int	main(void)
{
	int	a = 97;
	int	b = 97;
	printf("%d\n", toupper(a));
	printf("%d\n", ft_toupper(b));
}
*/
/*
int	main(void)
{
	return (0);
}
*/

