// мин тест не проходит

// массивы могут пересекаться

#include "libft.h"

void	*ft_memmove (void *dst, const void *src, size_t len)
{
	unsigned char	*new_d;
	unsigned char	*new_s;
	size_t			i;
	size_t			j;

	if (src == 0 || len == 0)
		return (0);
	new_d = (unsigned char *)dst;
	new_s = (unsigned char *)src;
	i = 0;
	j = 0;
	/*
printf("%s\n", dst);
printf("%s\n", src);
write (1, &dst[-1], 1);
write (1, "\n", 2);
*/

	while (j < len)
	{
		new_d[i] = new_s[j];
		i++;
		j++;
	}
	return (new_d);
}

int	main(void)
{
	unsigned char	src[15]  = "123899";
	unsigned char	src1[15]  = "123899";

	printf("%s\n", (memmove(&src[3], &src[2], 4)));
	printf("%s\n", (ft_memmove(&src1[3], &src1[2], 4)));
}
