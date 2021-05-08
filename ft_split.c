#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**new_s;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 2;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	new_s = (char **) malloc(j * sizeof(char *));
	if (new_s == 0)
		return (0);
	i = 0;
	while (i < j)
	{
		new_s[i] = (char *) malloc(100 * sizeof(char));
		if (new_s[i] == 0)
			return (0);
		i++;
	}
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			new_s[j][k] = s[i];
		}
		if (s[i] == c)
		{
			new_s[j][k] = '\0';
			j++;
			k = -1;
		}
		i++;
		k++;
	}
	return (new_s);
}
/*
int	main(void)
{
	printf ("%s %s %s", ft_split("Hell-tw-rld", '-')[0], ft_split("Hell-tw-rld", '-')[1], ft_split("Hell-tw-rld", '-')[2]);
}
*/
