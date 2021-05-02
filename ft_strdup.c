#include "libft.h"

char *ft_strdup(const char *str)
{
	int		i;
	char	*new_str;

	i = 0;
	while (str[i] != '\0')
		i++;
	new_str = malloc(i + 1);
	if (new_str == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
/*
int	main(void)
{
	char	a[4] = "abc";
	char	a1[4] = "abc";
	printf("%s\n", strdup(a));
	printf("%s\n", ft_strdup(a1));
}
*/
