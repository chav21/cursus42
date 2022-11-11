/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:56:59 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/11 17:50:38 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     void * memcpy(void *restrict dst, const void *restrict src, size_t n);
DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory
	area dst.  If dst and src overlap, behavior is undefined.  Applications in
	which dst and src might overlap should use memmove(3) instead.
RETURN VALUES
     The memcpy() function returns the original value of dst.
¡¡OJO!!
	Fíjate cómo se castean las variables (lín 34 y 35)
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src_2;
	unsigned char	*dst_2;

	dst_2 = (unsigned char *)dst;
	src_2 = (unsigned char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (n > 0)
	{
		*dst_2 = *src_2;
		dst_2++;
		src_2++;
		n--;
	}
	return (dst);
}
