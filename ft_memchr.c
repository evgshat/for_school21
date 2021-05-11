#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	unsigned char	*new_s;
	size_t			i;
	unsigned char	ch;

	new_s = (unsigned char *)buf;
	i = 0;
	ch = (unsigned char)c;
	while (i < count)
	{
		if (*new_s == ch)
		{
			return (new_s);
		}
		new_s++;
		i++;
	}
	return (0);
}
