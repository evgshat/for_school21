#include "libft.h"

int	ft_isprint(int ch)
{
	int	res;

	res = 0;
	if (126 >= ch && ch >= 32)
		res = 1;
	return (res);
}
