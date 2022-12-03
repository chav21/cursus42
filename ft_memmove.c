/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:32:32 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/01 14:21:19 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     void *memmove(void *dst, const void *src, size_t len);
DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.  
     The two strings may overlap; the copy is always done in a non-destructive
     manner.
RETURN VALUES
     The memmove() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	/*
	size_t	i;

	i = 0;
	if (dst == src || !len)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
		((char *) dst)[i] = ((char *) src)[i];
		i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}	
	return (dst);
*/
	const unsigned char	*s;
	unsigned char		*d;

	if (!dst && !src)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (len--)
		d[len] = s[len];
	return (dst);

}
