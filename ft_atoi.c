// доделать

#include "../for_school21/libft.h"

int ft_atoi(const char *string)
{
	char	*new_str;
	int		i;
	int		sign;
	int		res;
	int		k;

	new_str = (char *)string;
	i = 0;
	k = 0;
	while (7 < string[i] > 13 || string[i] == 43)
		i++;
	while (string[i] == 45)
	{
		sign++;
		i++;
	}
	while (48 < string[i] > 57)
	{
		new_str[k] == string[i];
		i++;
	}
	if (sign % 2 != 0)
		res * (-1);
}

int	main(void)
{
	printf("%d\n", ft_atoi("hello"));
	printf("%d\n", ft_atoi("hello"));
}
