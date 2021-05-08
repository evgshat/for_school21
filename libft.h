/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 19:30:11 by lcharlet          #+#    #+#             */
/*   Updated: 2021/05/08 15:07:45 by lcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <errno.h>

void	*ft_memcpy (void *dst, const void *src, size_t n);
int		ft_isdigit(int ch);
void	ft_bzero(void *s, size_t n);

#endif
