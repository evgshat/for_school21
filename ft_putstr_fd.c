// удалить мейн

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
/*
int	main(void)
{
	ft_putstr_fd("hello", 2);
}
*/
