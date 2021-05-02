#include "libft.h"

void	*ft_memccpy (void *destination, const void *source, int c, size_t n)
{
	unsigned char	 	*dest;
	unsigned char		*src;
	unsigned char		ch;
	size_t				i;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	ch = (unsigned char)c;
	i = 0;

	while (i < n)
	{
		if (src[i] == ch)
			{
				dest[i] = src[i];
				i++;
				return (&dest[i]);
			}
		dest[i] = src[i];
		i++;
	}

	return (NULL);
}
