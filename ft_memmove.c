/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:54:00 by lcharlet          #+#    #+#             */
/*   Updated: 2021/04/25 18:08:18 by lcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	printf("%c\n", dest[0]);
	return (dest);
}

int main()
{
	unsigned char dest[15] = "123456";
	unsigned char src[15] = "123999";

	unsigned char dest1[15] = "";
	unsigned char src1[15] = "";

	//printf("%s\n", (memmove(&dest[3], &src[3], 2))); //memmove (&src[4], &src[3], 3);
	printf("%s\n", (ft_memmove(&dest1[3], &src1[3], 2)));
}

