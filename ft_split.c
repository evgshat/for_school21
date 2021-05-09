#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**new_s;
	int		i;
	int		j;
	int		cnt;

	i = 0;
	cnt = strlen(s);
	new_s = (char **) malloc(cnt * sizeof(char *));
	if (new_s == 0)
		return (0);
	while (*s != '\0')
	{
		j = 0;
		cnt = 0;
		while (*s == c)
			s++;
		while (*s != c && *s != '\0')
		{
			cnt++;
			s++;
		}
		if (cnt == 0)
			break ;
		//printf("%d\n", cnt);
		new_s[i] = (char *) malloc(cnt * sizeof(char) + 1);
		if (new_s[i] == 0)
			return (0);
		s = s - cnt;
		while (*s != c && *s != '\0')
			{
				new_s[i][j] = *s;
				j++;
				s++;
			}
		new_s[i][j] = '\0';
	i++;
	}
	new_s[i] = NULL;
	return (new_s);
}
