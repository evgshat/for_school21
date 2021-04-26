// я хз как, но мин тест прошел

// удалить мейн
// перепроверить путь в include
// пофиксить шапку (надо чтобы мое имя было)
// что будет, если разделитель так и не встретился
// NULL если в первых n байтах массива источника встречен символ, код которого соответствует указанному в аргументе c.
// проверить, если символа больше, чем один
// как правильно выйти из функции
// надо ли проверить, что с - это интовое значение?
#include "../for_school21/libft.h"

void	*ft_memccpy (void *destination, const void *source, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	int				i;
	int				j;
	int				flag;

	i = 0;
	j = 0;
	flag = 0;
	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	c = c + '0';
	while (src[i] != c || i <= n)
	{
		if (src[i] == c)
			flag++;
		i++;
	}
	if (flag == 0)
	{
		write(1, "NULL", 5);
		return (NULL);
	}
	i = 0;
	while (src[i] != c && dest[j] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != c && dest[i] != '\0')
	{
		dest++;
		i++;
	}
	return (dest);
}

int	main(void)
{
	unsigned char	dest[15];
	unsigned char	scr[15];
	unsigned char	dest1[15];
	unsigned char	scr1[15];

	dest[15] = "23bkjll";
	scr[15] = "1234cd";
	dest1[15] = "23bkjll";
	scr1[15] = "1234cd";
	// пока ТУТ не встретится символ или пока не скопируется n байт
	// нужно, чтобы символ тоже был скопирован
	printf ("%s\n", memccpy(dest, scr, '4', 4));
	printf ("%s\n", ft_memccpy(dest1, scr1, '3', 4));
	// возвращаемое значение - если символ с скопирован, memccpy вернут указатель на тот байт в dest, который следует за символом
}
