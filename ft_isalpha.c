#include "libft.h"

int	ft_isalpha(int ch)
{
	int	res;

	res = 0;
	if ((90 >= ch && ch >= 65) || (97 <= ch && ch <= 122))
		res = 1;
	return (res);
}
