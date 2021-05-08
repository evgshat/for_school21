#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		n;
	int		cnt;
	char	*new_s;

	i = 0;
	n = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		cnt++;
		i++;
	}
	new_s = (char *)malloc(cnt * sizeof(char));
	if (new_s == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = f(cnt, s[i]);
		i++;
	}
	return (new_s);
}

char	f(unsigned int cnt, char s)
{
	char	new_s;
	int		i;

	i = 0;
	//
	cnt = 0;
	new_s = (char) malloc(1 * sizeof(char));
	if (new_s == 0)
		write(1, "NULL", 5);
	new_s = s + '0';
	return (new_s);
}
/*
int	main(void)
{
	printf ("%s\n", ft_strmapi("abc", f));
}
*/
