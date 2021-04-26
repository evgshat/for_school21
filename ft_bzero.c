// перепроверить путь в include
// удалить мейн
// поправить шапку
// ответ должен быть пустым?
// нужно ли  проверять, что n не больше, чем символов в строке s?
// нужен ли write?
// можно ли как-то проверить оригинальную функцию?

#include "../for_school21/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*new_s;
	int				i;

	new_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		new_s[i] = '\0';
		i++;
	}
	while (new_s[i] != '\0')
	{
		i++;
	}
}

int	main(void)
{
	unsigned char scr[7] = "abcde\0";

	printf ("%s\n", bzero(scr, 2));
	ft_bzero(scr, 2);
}
