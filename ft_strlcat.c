/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a19060383 <a19060383@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:22:58 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/26 13:34:53 by a19060383        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// мин тесты проходят, но код тоже не очень нравится

#include "../for_school21/libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
	int i;
	char *new_src;
	size_t cnt;

	new_src = (char*)src;
	cnt = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (i < size - 1)
	{
		dst[i] = new_src[i];
		i++;
	}
	i = 0;
	while (dst[i] != '\0')
	{
		cnt++;
		i++;
	}
	i = 0;
	while (new_src[i] != '\0')
	{
		cnt++;
		i++;
	}
	return (cnt - 1);
}


int main()
{
	char dst[10] = "abc";
	char src[10] = "hhh";
	char dst1[10] = "abc";
	char src1[10] = "hhh";
	printf("%lu\n", strlcat(dst, src, 2));
	printf("%lu\n", ft_strlcat(dst1, src1, 2));
}
