// мин тест не удался, какое-то г пишется после

// удалить мейн
// почему-то какой-то мусор пишется

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd != 1)
		write(1, "NULL", 5);
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	if (s[i] == '\0')
		write(fd, "\n", 2);
}
/*
int	main(void)
{
	ft_putendl_fd("hello\0", 1);
}
*/
