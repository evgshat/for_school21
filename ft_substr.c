#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	chet;

	chet = 0;
	if (start < 0)
		return (NULL);
	new_s = (char *) malloc(len + 1);
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
