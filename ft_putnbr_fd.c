#include "libft.h"
/*
static void	res(int n_n, int stepen, long m, int fd)
{
	char	ch;
	int		cnt;

	cnt = 0;
	while (m > 9)
	{
		n_n = m / stepen;
		cnt = n_n * stepen;
		ch = m / stepen + '0';
		write (fd, &ch, 1);
		m = m - cnt;
		stepen = stepen / 10;
	}
	ch = m + '0';
	write (fd, &ch, 1);
}

static long	fu_m(long m, int fd)
{
	if (m < 0)
	{
		m = -m;
		write (fd, "-", 1);
	}
	return (m);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	m;
	int		cnt;
	int		n_n;
	int		stepen;

	m = n;
	cnt = 0;
	stepen = 1;
	n_n = 0;
	if (m == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	while (n != 0)
	{
		n = n / 10;
		cnt++;
	}
	m = fu_m(m, fd);
	while (cnt-- != 1)
		stepen = stepen * 10;
	res (n_n, stepen, m, fd);
}

int	main()
{
	ft_putnbr_fd(11529602, 1);
}
*/

void	ft_putnbr_fd(int n, int fd)
{
	char	res[11];
	int		ost;
	int		i;
	long	m;

	i = 0;
	m = n;
	if (m == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (m < 0)
	{
		write (fd, "-", 1);
		m = m * (-1);
	}
	while (m > 0)
	{
		ost = m % 10;
		m = m / 10;
		res[i] = ost + '0';
		i++;
	}
	while (i >= 0)
	{
		write (fd, &res[i], 1);
		i--;
	}
}

int	main()
{
	ft_putnbr_fd(2147483647, 1);
}
