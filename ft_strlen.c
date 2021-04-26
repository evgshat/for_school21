// мин тесты проходят

#include "../for_school21/libft.h"

size_t	ft_strlen (const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	main(void)
{
	printf("%lu\n", strlen(""));
	printf("%lu\n", ft_strlen(""));
}
