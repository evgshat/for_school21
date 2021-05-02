#include "libft.h"

int	ft_toupper(int ch)
{
	int	res;

	res = ch;
	if (97 <= ch && ch <= 122)
		res = ch - 32;
	return (res);
}
