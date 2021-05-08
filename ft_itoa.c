#include "libft.h"

char	*ft_itoa(int n)
{
	char	*new_s;
	int		i;
	int		n_o[15];
	int		n_o_i;

	i = 0;
	n_o_i = 0;
	new_s = (char *) malloc(15 * sizeof(char));
	if (new_s == 0)
		return (0);
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
	return (new_s);
}
/*
int main(void)
{
	printf ("%s\n", ft_itoa(10));
}
*/
