// мин тесты проходят, но код тоже не очень нравится

#include "../for_school21/libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t size)
{
	int		i;
	char	*new_src;
	size_t	cnt;

	new_src = (char *)src;
	cnt = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (i < size - 1)
	{
		dst[i] = new_src[i];
		i++;
	}
	i = 0;
	while (dst[i] != '\0')
	{
		cnt++;
		i++;
	}
	i = 0;
	while (new_src[i] != '\0')
	{
		cnt++;
		i++;
	}
	return (cnt - 1);
}

int	main(void)
{
	char	dst[10];
	char	src[10];
	char	dst1[10];
	char	src1[10];

	dst[10] = "abc";
	src[10] = "hhh";
	dst1[10] = "abc";
	src1[10] = "hhh";
	printf("%lu\n", strlcat(dst, src, 2));
	printf("%lu\n", ft_strlcat(dst1, src1, 2));
}
