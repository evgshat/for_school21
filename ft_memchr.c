// мин тест проходит

// нужно ли что-то возвращать, если у нас NULL?
// надо ли проверить, что придет обязательно int? (символ от 0 до 9)
// не понимаю, почему получается норм работать с int-ом
// надо ли писать write или достаточно return?
// почему в прототипе надо передать int, но при это я спокойно могу передать char?

#include "libft.h"

void	*ft_memchr( const void *buf, int c, size_t count)
{
	unsigned char	*new_s;
	size_t			i;

	new_s = (unsigned char *)buf;
	i = 0;
	//c = c + '0';
	while (i < count)
	{
		if (*new_s == c)
		{
			return (new_s);
		}
		new_s++;
		i++;
	}
	write (1, "NULL", 5);
	return (0);
}
/*
int	main(void)
{
	unsigned char	buf[6] = "hello";

	printf("%s\n", (memchr(buf, '1', 2)));
	printf("%s\n", (ft_memchr(buf, 'e', 3)));
}
*/
