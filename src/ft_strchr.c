// мин тест проходит

// надо ли ретенить или писать налл, если налл? что из этого делать?

#include "../libft.h"

char	*ft_strchr (const char *str, int ch)
{
	int		flag;
	char	*new_str;

	flag = 0;
	new_str = (char *)str;
	while (new_str != 0)
	{
		if (*new_str == ch)
		{
			flag++;
			break ;
		}
		new_str++;
	}
	if (flag == 0)
	{
		write(1, "NULL", 5);
		return (0);
	}
	return (new_str);
}

int	main(void)
{
	char	dst[10] = "abc";
	char	dst1[10] = "abc";

	printf("%s\n", strchr(dst, 'b'));
	printf("%s\n", ft_strchr(dst1, 'b'));
}
