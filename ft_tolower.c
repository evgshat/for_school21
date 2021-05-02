#include "libft.h"

int	ft_tolower(int ch)
{
	int	res;

	res = ch;
	if (65 <= ch && ch <= 90)
		res = ch + 32;
	return (res);
}
