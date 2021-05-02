#include "libft.h"

int	ft_isdigit(int ch)
{
	int	res;

	res = 0;
	if (57 >= ch && ch >= 48)
		res = 1;
	return (res);
}
