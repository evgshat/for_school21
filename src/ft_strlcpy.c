// работает, но оч бредовый код

#include "../libft.h"

size_t	ft_strlcpy (char *dst, const char *src, size_t size)
{
	size_t	cnt;
	int		i;
	char	*new_src;

	new_src = (char*)src;
	i = 0;
	cnt = 0;

	while (i < size - 1)
	{
		dst[i] = new_src[i];
		i++;
	}
	i = i + 2;
	new_src[i] = '\0';
	i = 0;
	while(new_src[i]!= '\0')
		{
			cnt++;
			i++;
		}
		return (cnt);
}

int main()
{
	char dst[10] = "abc";
	char src[10] = "hhh";
	char dst1[10] = "abc";
	char src1[10] = "hhh";
	printf("%lu\n", strlcpy(dst, src, 2));
	printf("%lu\n", ft_strlcpy(dst1, src1, 2));
}
