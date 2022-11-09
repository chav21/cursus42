/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:58:28 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/09 12:18:45 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	 #include <string.h>
	 size_t strlcat(char *dst, const char *src, size_t dstsize);
RETURN VALUES
	 Like snprintf(3), the strlcpy() and strlcat() functions return the total
	 length of the string they tried to create.
	 For strlcat() that means the initial length of dst plus the length of src.

	 If the return value is >= dstsize, the output string has been truncated.
	 It is the caller's responsibility to handle this.
DESCRIPTION
	 The strlcpy() and strlcat() functions copy and concatenate strings with
	 the same input parameters and output result as snprintf(3). 

	 strlcpy() and strlcat() take the full size of the destination buffer and 
	 guarantee NUL-termination if there is room.  
	 Note that room for the NUL should be included in dstsize.
	 strlcat() appends string src to the end of dst.  It will append at most
	 dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
	 dstsize is 0 or the original dst string was longer than dstsize.
	 If the src and dst strings overlap, the behavior is undefined.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	else
	{
		dst[i] = '\0';
		return (len_dst + len_src);
	}
}
