#include "../for_school21/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	chet;

	chet = 0;
	new_s = (char *) malloc(len + 1);
	if (new_s != 0)
	{
		while (chet < len)
		{
			new_s[chet] = s[start + chet];
			chet++;
		}
		new_s[chet] = '\0';
		return (new_s);
	}
	else
	{
		write(1, "Не удалось выделить память", 26);
		return (NULL);
	}
}

int	main(void)
{
	printf("%s\n", ft_substr("hello", 1, 3));
	return (1);
}
