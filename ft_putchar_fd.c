// мин тесты проходят

// вообще правильно поняла?
// перепроверить путь в include
// удалить мейн
// нужна ли проверка на fd = 1?

#include "../for_school21/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd != 1)
		write(1, "NULL", 5);
	else
		write(fd, &c, 1);
}

int	main(void)
{
	ft_putchar_fd('-', 1);
}
