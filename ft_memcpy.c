#include "libft.h"

void	*ft_memcpy (void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_d;
	unsigned char	*new_s;

	if (src == NULL && dst == NULL)
		return (0);
	i = 0;
	new_d = (unsigned char *)dst;
	new_s = (unsigned char *)src;
	while (i < n)
	{
		new_d[i] = new_s[i];
		i++;
	}
	return (new_d);
}
