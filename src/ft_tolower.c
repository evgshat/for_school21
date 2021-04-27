#include "../libft.h"

int	ft_tolower(int ch)
{
	int	res;

	res = ch;
	if (65 <= ch && ch <= 90)
		res = ch + 32;
	return (res);
}

int	main(void)
{
	int	a = 90;
	int	b = 90;
	printf("%d\n", tolower(a));
	printf("%d\n", ft_tolower(b));
}
