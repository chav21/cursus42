/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:32:43 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/09 12:15:28 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	 #include <string.h>
	 size_t strlcpy(char *dst, const char *src, size_t dstsize);
RETURN VALUES
	 The strlcpy() and strlcat() functions return the total length of the 
	 string they tried to create.  For strlcpy() that means the length of src.

	 If the return value is >= dstsize, the output string has been truncated.
	 It is the caller's responsibility to handle this.
DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings with
	 the same input parameters and output result as snprintf(3).  
     strlcpy() and strlcat() take the full size of the destination buffer and
	 guarantee NUL-termination if there is room.  Note that room for the NUL 
	 should be included in dstsize.

     strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
	 NUL-terminating the result if dstsize is not 0.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (n);
}
