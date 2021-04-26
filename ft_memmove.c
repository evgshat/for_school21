// мин тест не проходит

// массивы могут пересекаться

#include "../for_school21/libft.h"

void	*ft_memmove (void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	int				i;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	i = 0;
	printf("%s\n", src);
	printf("%c\n", src[1]);
	printf("%s\n", dest);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	printf("%s\n", dest);
	while (dest[i] != '\0')
		i++;
	return (dest);
}

int	main(void)
{
	unsigned char	dest[15] = "123456";
	unsigned char	src[15]  = "123999";
	unsigned char	dest1[15] = "";
	unsigned char	src1[15] = "1234567890";
/*
	dest[15] = "123456";
	src[15] = "123999";
	dest1[15] = "";
	src1[15] = "1234567890";
*/
	//printf("%s\n", (memmove(&src1[4], &src1[3], 3)));
	printf("%s\n", (ft_memmove(&src1[4], &src1[3], 3)));
}
