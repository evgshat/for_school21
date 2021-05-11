#include "libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t	res;
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] != '\0' && j < dstsize)
		j++;
	res = j + ft_strlen(src);
	if (j < dstsize)
	{
		i = 0;
		while (src[i] != '\0' && i < (dstsize - j - 1))
		{
			dst[j + i] = src[i];
			i++;
		}
		dst[j + i] = '\0';
	}
	return (res);
}
