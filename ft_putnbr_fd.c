#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*new_s;
	int		i;
	int		n_o_i;
	int		n_o[15];

	i = 0;
	n_o_i = 0;
	new_s = malloc (100);
	if (n < 0)
	{
		new_s[i] = '-';
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n_o[n_o_i] = n % 10;
		n = n / 10;
		n_o_i++;
	}
	new_s[i] = n + '0';
	while (n_o_i - 1 >= 0)
	{
		i++;
		new_s[i] = n_o[n_o_i - 1] + '0';
		n_o_i--;
	}
	i = 0;
	while (new_s[i] != '\0')
	{
		write (fd, &new_s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(49, 1);
}
*/
