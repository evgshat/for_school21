#include "libft.h"

int	ft_isascii(int ch)
{
	int	res;

	res = 0;
	if (127 >= ch && ch >= 0)
		res = 1;
	return (res);
}
