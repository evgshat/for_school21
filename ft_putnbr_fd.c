#include "libft.h"

static int	num_int	(int n)
{
	int	cnt;

	cnt = 0;
	while (n != 0)
	{
		n = n / 10;
		cnt++;
	}
	return (cnt);
}

static long	f_stepen(int cnt)
{
	long	stepen;

	stepen = 1;
	while (cnt != 1)
	{
		stepen = stepen * 10;
		cnt--;
	}
	return (stepen);
}

static void	res(int cpy_n, int fd, int cnt)
{
	int		ch_int;
	char	ch;
	int		i;
	int		stepen;

	i = 0;
	ch_int = 0;
	stepen = f_stepen(cnt);
	while (stepen != 0)
	{
		ch_int = cpy_n / stepen;
		ch = ch_int + '0';
		cpy_n = cpy_n - ch_int * stepen;
		stepen = stepen / 10;
		write (fd, &ch, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		cnt;
	int		cpy_n;

	cpy_n = n;
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
		cpy_n = n * (-1);
	}
	cnt = num_int(n);
	res(cpy_n, fd, cnt);
}
