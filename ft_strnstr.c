// доделать

//можно ли два return?

#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	char	*new_big;
	char	*new_lit;
	size_t	chet;
	//char	*res;

	new_big = (char *)big;
	new_lit = (char *)little;
	chet = 0;
	len = 0;
	/*
	while (new_big != 0)
	{
	while (new_lit != 0)
	{
		if (*new_big == *new_lit)
		{
			chet++;
			new_big++;
			new_lit++;
		}
		if (*new_big != *new_lit)
		{
			new_big++;
			new_lit++;
			chet = 0;
		}
		if (chet == len)
			break ;
	}
		new_big++;
		new_lit = new_lit - len;
	}
	printf("%lu\n", chet);
	printf("%s\n", new_big);
	if (chet == len)
		return (new_big);
	if (chet < len)
		return (0);
	*/
	return (0);
}
// если little - пустая - вернуть big
// если нет вхождения lit в big - то вернуть null
// если ок - вернуть указатель, где первое вхождение
// надо, чтобы еще входит '/0' символ. То есть, если ищем 3 в 232, то надо искать не 1 символ, а два
/*
int	main(void)
{
	char	big[10] = "133435";
	char	lit[10] = "334";
	char	big1[10] = "133435";
	char	lit1[10] = "334";

	//printf ("%s\n", strnstr(big, lit, 4));
	printf ("%s\n", ft_strnstr(big1, lit1, 3));
}
*/
