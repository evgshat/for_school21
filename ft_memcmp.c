// не понимаю, почему не работает

#include "libft.h"

int	ft_memcmp (const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;
	int				res;

	i = 0;
	res = 0;
	a = (unsigned char *)arr1;
	b = (unsigned char *)arr2;
	while (i < n)
	{
		if (a[i] == b[i])
			i++;
		if (a[i] > b[i])
		{
			res = 1;
			break ;
		}
		if (a[i] < b[i])
		{
			res = -1;
			break ;
		}
	}
	return (res);
}
/*
int main(void)
{
	unsigned char	arr1[15] = "abc";
	unsigned char	arr2[15] = "abd";

	printf ("%d\n", memcmp(arr1, arr2, 2));
	printf ("%d\n", ft_memcmp(arr1, arr2, 2));
}
*/
