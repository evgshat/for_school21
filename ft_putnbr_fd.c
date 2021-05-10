#include "libft.h"

static void	res(int n, int fd, int ost, int i)
{
	char	res[11];

	while (n > 0)
	{
		ost = n % 10;
		n = n / 10;
		res[i] = ost + '0';
		i++;
	}
	while (i >= 0)
	{
		write (fd, &res[i - 1], 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		ost;
	int		i;

	i = 0;
	ost = 0;
	if (n == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (n == INT_MIN || n == INT_MAX)
	{
		if (n == INT_MIN)
			write (fd, "-2147483648", 11);
		if (n == INT_MAX)
			write (fd, "2147483647", 10);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * (-1);
	}
	res(n, fd, ost, i);
}
