#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*new_s;
	size_t			i;

	new_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		new_s[i] = '\0';
		i++;
	}
}
