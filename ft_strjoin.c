#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		i++;
		j++;
	}
	new_s = (char *) malloc(i);
	if (new_s == 0)
		return (0);
	j = -1;
	i = -1;
	while (s1[++j] != '\0')
		new_s[j] = s1[j];
	while (s2[++i] != '\0')
	{
		new_s[j] = s2[i];
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}
