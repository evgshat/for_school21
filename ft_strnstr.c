#include "libft.h"

size_t	new_f(char *new_h, char *new_n)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (new_n[i] != '\0')
	{
		if (new_h[i] != new_n[i])
			return (0);
		if (new_h[i] == new_n[i])
		{
			i++;
			cnt++;
		}
	}
	return (cnt);
}

size_t	size_new_n(char *new_n)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (new_n[i++] != '\0')
		cnt++;
	return (cnt);
}

char	*ft_strnstr (const char *haystack, const char *needle, size_t len)
{
	char	*new_h;
	char	*new_n;
	size_t	i;
	size_t	cnt;
	size_t	res;

	new_h = (char *)haystack;
	new_n = (char *)needle;
	i = 0;
	cnt = 0;
	if (len == 0 || new_n[i] == '\0')
		return (new_h);
	while (*new_h != '\0' && cnt < len)
	{
		if (*new_h != *new_n)
		{
			new_h++;
			cnt++;
		}
		if (*new_h == *new_n)
		{
			if (cnt + size_new_n(new_n) > len)
				return (0);
			res = new_f(new_h, new_n);
			if (res != 0)
				return (new_h);
			if (res == 0)
			{
				if (res + cnt > len)
					return (0);
				new_h = new_h + res;
				cnt++;
			}
		}

	}
	return (0);
}
