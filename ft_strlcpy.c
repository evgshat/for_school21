#include "libft.h"

size_t	ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
	size_t	cnt;
	size_t	i;
	char	*new_src;
	char	*new_dst;

	new_src = (char *)src;
	new_dst = (char *)dst;
	i = 0;
	cnt = 0;
	while(new_src[i++]!= '\0')
			cnt++;
	i = 0;
	if (dstsize == 0)
		return (cnt);
	if (new_dst <= new_src)
		return (cnt);
		while (i < (dstsize - 1) && (new_dst[i] != '\0') && (new_src[i] != '\0'))
		{
			new_dst[i] = new_src[i];
			i++;
		}
	new_dst[i] = '\0';
	return (cnt);
}
