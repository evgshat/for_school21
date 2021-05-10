#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	chet;
	size_t	cnt;

	chet = 0;
	cnt = ft_strlen(s);
	if (start >= cnt)
		return (ft_strdup(""));
	new_s = (char *) malloc(len + 1);
	if (new_s == 0)
		return (NULL);
	if (new_s != 0)
	{
		while (chet < len)
		{
			new_s[chet] = s[start + chet];
			chet++;
		}
		new_s[chet] = '\0';
		return (new_s);
	}
	else
	{
		return (0);
	}
}
