#include "libft.h"

void	*ft_memcpy (void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_d;
	unsigned char	*new_s;

	if (src == NULL)
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
/*
int main(void)
{
	unsigned char	dest[15] = "1234";
	unsigned char	src[15]  = "123";
	unsigned char	dest1[15]  = "1234";
	unsigned char	src1[15] = "123";

	printf("%s\n", (memcpy(&dest[0], &src[0], 4)));
	printf("%s\n", (ft_memcpy(&dest1[0], &src1[0], 4)));
}
*/
