/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:29:42 by lcharlet          #+#    #+#             */
/*   Updated: 2021/04/25 17:55:24 by lcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// удалить мейн
// перепроверить путь в include
// пофиксить шапку (надо чтобы мое имя было)
// почему в destination не могу передать строку (получаю bus error), а в source - могу?
// приходиться вводить новые переменные. по-другому не работает. ок ли это? могу ли я преобразовать входные параметры?
// исправить на dest и src
#include "../for_school21/libft.h"

void *ft_memcpy (void *destination, const void *source, size_t n)
{
	int i;
	unsigned char *new_d;
	unsigned char *new_s;

	i = 0;
	new_d = (unsigned char *)destination;
	new_s = (unsigned char *)source;
	while (i < n)
	{
		new_d[i] = new_s[i];
		i++;
	}
	while (new_s[i] != '\0')
	{
		i++;
	}
	return (new_d);
}

int main()
{
	unsigned char scr[7] = "abcde\0";
	unsigned char cr[7] = "ee\0";

	printf ("%s\n", memcpy(scr, cr, 2));
	printf ("%s\n", ft_memcpy(scr, cr, 2));
}
