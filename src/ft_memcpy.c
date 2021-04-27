// удалить мейн
// приходиться вводить новые переменные. по-другому не работает. ок ли это? могу ли я преобразовать входные параметры?
// исправить на dest и src
#include "../libft.h"

void	*ft_memcpy (void *destination, const void *source, size_t n)
{
	int				i;
	unsigned char	*new_d;
	unsigned char	*new_s;

	i = 0;
	new_d = (unsigned char *)destination;
	new_s = (unsigned char *)source;
	while (i < n)
	{
		new_d[i] = new_s[i];
		i++;
	}
	while (new_s[i] != '\0')
	{
		i++;
	}
	return (new_d);
}

int main(void)
{
	unsigned char	dst[7] = "abcde\0";
	unsigned char	src[7] = "ee\0";

	printf ("%s\n", memcpy(dst, src, 2));
	printf ("%s\n", ft_memcpy(dst, src, 2));
}
