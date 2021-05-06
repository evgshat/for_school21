#include "libft.h"
int new_fu(char *str)
{
	int	i;
	int	cnt;
	int res;
	int stepen;
	int cnt_1;

	i = 0;
	cnt = 0;
	res = 0;
	stepen = 1;
	while (str[i++] != '\0')
		cnt++;
	i = 0;
	cnt_1 = cnt;
	if (cnt == 1)
		return (str[i] - '0');

		while (cnt != 1)
		{
			stepen = stepen * 10;
			cnt--;
		}
		while (cnt_1 != 0 && str[i] != '\0')
		{
			if (cnt_1 == 1)
				res = res + (str[i] - '0');
			if (cnt_1 != 1)
			{
				res = res + ((str[i] - '0') * stepen);
				stepen = stepen / 10;
			}
			cnt_1--;
			i++;
		}
	return (res);
}

int	ft_atoi(const char *string)
{
	char	*new_str;
	int		i;
	char	*res;
	int		r;
	int		sign;

	new_str = (char *)string;
	res = (char *)malloc(100);
	i = 0;
	r = 0;
	sign = 0;

	while (new_str[i] != '\0')
	{

		if (new_str[i] == 43)
			i++;
		if (new_str[i] == 45 && sign != 1)
		{
			sign = 1;
			i++;
		}

		if (new_str[i] < 58 && new_str[i] > 48)
		{
			while (ft_isdigit(new_str[i]) == 1)
			{
				res[r] = new_str[i];
				r++;
				i++;
			}
		}
		i++;
	}
	//printf("%s\n", res);
	r = new_fu(res);
	if (sign == 1)
		r = r * (-1);
	return (r);
}
/*

int	main(void)
{
	printf("%d\n", atoi("-1234"));
	printf("%d\n", ft_atoi("-1234"));
	//printf("%d\n", new_f("83427"));
}
*/

