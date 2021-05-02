#include "libft.h"

char	*ft_strrchr(char *str, int symbol)
{
	while (*str != 0)
		str++;
	while (*str != symbol)
		str--;
	return (str);
}
/*
int	main(void)
{
	char	str[10] = "133435";
	char	str1[10] = "133435";

	printf ("%s\n", strrchr(str, '3'));
	printf ("%s\n", ft_strrchr(str1, '3'));
}
*/
