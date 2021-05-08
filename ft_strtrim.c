#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	char	*res;
	char	*r;

	while ((*s1 != '\0') && (ft_strchr(set, *s1) != NULL))
		s1++;
	s2 = (char *)s1;
	while (*s2 != '\0')
		s2++;
	s2--;
	while ((s2 > s1) && (ft_strchr(set, *s2) != NULL))
		s2--;
	res = malloc(s2 - s1 + 2);
	if (res == NULL)
		return (NULL);
	r = res;
	while (s1 <= s2)
	{
		*r = *s1;
		s1++;
		r++;
	}
	*r = '\0';
	return (res);
}
