/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a19060383 <a19060383@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:39:12 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/20 12:42:29 by a19060383        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// мин тесты проходят

// удалить мейн
// нужен ли перенос строки
// перепроверить путь в include

#include "../for_school21/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *new_s;
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
		i++;
	}
	new_s = (char *) malloc(i);
	j = 0;
	i = 0;
	if (new_s == 0)
		write(1, "NULL", 5);
	else
	{
		while (s1[j] != '\0')
		{
			new_s[j] = s1[j];
			j++;
		}
		while (s2[i] != '\0')
		{
			new_s[j] = s2[i];
			i++;
			j++;
		}
	}
	new_s[j] = '\0';
	return (new_s);
}

int main()
{
	printf ("%s\n", ft_strjoin("pri", "vet"));
}
