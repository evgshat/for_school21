#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_h;

	i = 0;
	new_h = (char *)haystack;
	if (*needle == '\0')
		return (new_h);
	while (i < len && new_h[i] != '\0')
	{
		if (new_h[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && new_h[i + j] != '\0' && (i + j) < len)
			{
				if (needle[j] != new_h[i + j])
					break ;
				j++;
			}
			if (needle[j] == '\0')
				return (&new_h[i]);
		}
		i++;
	}
	return (NULL);
}
