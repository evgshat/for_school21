#include "libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*new_src;
	char	*new_dst;
	size_t	cnt;

	new_src = (char *)src;
	new_dst = (char *)dst;
	cnt = 0;
	i = 0;
	j = 0;
	while (new_dst[i++] != 0)
		cnt++;
	if (size == 0)
		return (cnt);
	i = 0;
	while (new_dst[i] != '\0')
		i++;
	while (j < (size - 1) && (new_src[j] != '\0'))
	{
		new_dst[i] = new_src[j];
		i++;
		j++;
	}
	new_dst[i] = '\0';
	//rintf("%s\n", new_dst);
	i = 0;
	while (new_dst[i++] != 0)
		cnt++;
	//printf ("%lu\n", cnt);
	return (cnt-1);
}

int	main(void)
{
	char	dst[10] = "a";
	char	src[10] = "h";
	char	dst1[10] = "a";
	char	src1[10] = "h";

	printf("%lu\n", strlcat(dst, src, 4));
	printf("%lu\n", ft_strlcat(dst1, src1, 4));
}

