// почему во входном параметре int, а передать могу char?

#include "../libft.h"

int	ft_isalpha(int ch)
{
	int	res;

	res = 0;
	if ((90 >= ch && ch >= 65) || (97 <= ch && ch <= 122))
		res = 1;
	return (res);
}

int	main(void)
{
	int	a = 122;
	int	b = 122;
	printf("%d\n", isalpha(a));
	printf("%d\n", ft_isalpha(b));
}
