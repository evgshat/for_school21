/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a19060383 <a19060383@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:14:17 by a19060383         #+#    #+#             */
/*   Updated: 2021/04/26 12:53:27 by a19060383        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// не понимаю, почему не работает

#include "../for_school21/libft.h"

int ft_memcmp (const void *arr1, const void *arr2, size_t n)
{
	unsigned char* a;
	unsigned char* b;
	int i;
	int res;

	i = 0;
	res = 0;
	a = (unsigned char *)arr1;
	b = (unsigned char *)arr2;

	while (i < n)
	{
		if (a[i] == b[i])
			i++;
		if (a[i] > b[i])
		{
			res = 1;
			break;
		}
		if (a[i] < b[i])
		{
			res = -1;
			break;
		}
		printf("%c\n", a[i]);
		printf("%c\n", b[i]);
	}
	return (res);
}

int main()
{
	unsigned char arr1[15] = "abc";
	unsigned char arr2[15] = "abd";

	//printf ("%d\n", memcmp(arr1, arr2, 2));
	printf ("%d\n", ft_memcmp(arr1, arr2, 2));
}
