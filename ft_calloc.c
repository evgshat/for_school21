#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*new;
	size_t	cnt;

	cnt = number * size;
	new = malloc(cnt);
	if (new == 0)
		return (0);
	ft_bzero(new, cnt);
	return (new);
}
