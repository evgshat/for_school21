/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a19060383 <a19060383@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:32:29 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/22 17:55:54 by a19060383        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// мин тесты проходят

// перепроверить путь в include
// использовать free
// удалить мейн
// проверить вариант, если символ с вообще не встречается
// почему-то в конце процент
// надо ли переносить на новую строку?
// пофиксить шапку (надо чтобы мое имя было)

#include "../for_school21/libft.h"

char **ft_split(char const *s, char c)
{
	char **new_s;
	int i;
	int j;
	int k;

	i 	= 0;
	j 	= 2;
	k 	= 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	new_s = (char **)malloc(j * sizeof(char*));
	if (new_s == 0)
		write(1, "NULL", 5);
	i = 0;
	//
	while (i < j)
	{
		new_s[i] = (char *)malloc(100 * sizeof(char));
		if (new_s[i] == 0)
			write(1, "NULL", 5);
		i++;
	}
	i = 0;
	j = 0;
	while (s[i] != '\0')
		{
			if (s[i] != c)
			{
				new_s[j][k] = s[i];
			}
			if (s[i] == c)
			{
				new_s[j][k] = '\0';
				j++;
				k = -1;
			}
			i++;
			k++;
		}
	return (new_s);
}

int main()
{
	printf ("%s %s %s", ft_split("Hellotworld", 'o')[0], ft_split("Hellotworld", 'o')[1], ft_split("Hellotworld", 'o')[2]);
}
