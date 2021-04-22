/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a19060383 <a19060383@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:02:56 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/22 16:39:24 by a19060383        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// не проходят тесты (не понимаю, что значит "применить")

// удалить мейн
// перепроверить путь в include
// пофиксить шапку (надо чтобы мое имя было)
// в смысле "применить" функцию для каждого символа строки?

#include "../for_school21/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	int n;
	int cnt;
	char *new_s;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		cnt++;
		i++;
	}
	new_s = (char*)malloc(cnt * sizeof(char));
	if (new_s == 0)
		write(1, "NULL", 5);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = f(cnt, s[i]);
		i++;
	}
	return (new_s);
}
//
char f(unsigned int cnt, char s)
{
	char new_s;
	int i;

	i = 0;
	new_s = (char)malloc(1 * sizeof(char));
	if (new_s == 0)
		write(1, "NULL", 5);
	new_s = s + '0';
	return (new_s);
	printf("%c\n", new_s);
}
//
int main()
{
	printf ("%s\n", ft_strmapi("abc", f));
}
