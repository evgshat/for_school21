/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:50:05 by lcharlet          #+#    #+#             */
/*   Updated: 2021/04/18 16:31:20 by lcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_s;
	size_t chet;

	chet = 0;
	new_s = (char*)malloc(len + 1);
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

int		main()
{
	printf("%s\n", ft_substr("hello", 1, 3));
	return (1);
}
