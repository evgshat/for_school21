#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*new_s;
	char	*a;
	char	ch;

	new_s = (char *)s;
	a = (char *)s;
	ch = (char)c;
	if (ch == '\0')
	{
		while (*new_s)
			new_s++;
		return (new_s);
	}
	while (*new_s != '\0')
		new_s++;
	new_s--;
	while (new_s >= a)
	{
		if (*new_s == ch)
			return (new_s);
		new_s--;
	}
	return (0);
}
