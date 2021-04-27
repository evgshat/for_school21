// мин тест проходит

// удалить мейн
// c - код символа
// сделать проверку, если с - не int, или если там больше одного символа
// можно ли использовать malloc?
// не использовать restrict и не компилить с флагом -std = с99
// void* - указатель на неопределенный тип. Нельзя присовить значения без явного преобразования этих знач к опр типу указателя
// int c надо походу к unsigned char привести
// write не очень работает. в итоге не написала его, а нужен ли он?

#include "../libft.h"

void	*ft_memset (void *destination, int c, size_t n)
{
	int				i;
	unsigned char	*new_s;
	char			s;

	i = 0;
	s = 0;
	new_s = (unsigned char *)destination;
	s = (unsigned char)c;
	while (i < n)
	{
		new_s[i] = c;
		i++;
	}
	return (new_s);
}

int	main(void)
{
	unsigned char	scr[6] = "hello\0";
	printf("%s\n", (ft_memset(scr, '2', 3)));
}
