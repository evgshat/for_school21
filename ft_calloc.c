#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*new;

	new = malloc(number * size);
	if (new == 0)
		return (NULL);
	return (new);
}
