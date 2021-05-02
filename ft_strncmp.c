// работает неправильно

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t num)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;
	int				res;

	i = 0;
	res = 0;
	a = (unsigned char *)string1;
	b = (unsigned char *)string2;
	while (i < num)
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
int	main(void)
{
	char	arr1[15] = "abc";
	char	arr2[15] = "abd";

	printf ("%d\n", strncmp(arr1, arr2, 2));
	printf ("%d\n", ft_strncmp(arr1, arr2, 2));
}
*/
