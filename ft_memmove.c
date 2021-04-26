/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a19060383 <a19060383@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:54:00 by lcharlet          #+#    #+#             */
/*   Updated: 2021/04/26 12:54:19 by a19060383        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// мин тест не проходит

// массивы могут пересекаться

#include "../for_school21/libft.h"

void *ft_memmove (void *destination, const void *source, size_t n)
{
	unsigned char *dest;
	unsigned char *src;
	int i;

	dest = (unsigned char* )destination;
	src = (unsigned char *)source;
	i = 0;
	printf("%s\n", src);
	printf("%c\n", src[1]);
	printf("%s\n", dest);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	printf("%s\n", dest);
	while (dest[i] != '\0')
		i++;
	return (dest);
}

int main()
{
	//unsigned char dest[15] = "123456";
	unsigned char src[15] = "123999";

	//unsigned char dest1[15] = "";
	unsigned char src1[15] = "1234567890";

	//printf("%s\n", (memmove(&src1[4], &src1[3], 3))); //memmove (&src[4], &src[3], 3);
	printf("%s\n", (ft_memmove(&src1[4], &src1[3], 3)));
}

