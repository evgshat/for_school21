// мин тесты проходят

// вообще правильно поняла?
// удалить мейн
// нужна ли проверка на fd = 1?

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd != 1)
		write(1, "NULL", 5);
	else
		write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('-', 1);
}
*/
