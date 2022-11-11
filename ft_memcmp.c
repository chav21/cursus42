/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:39:38 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/11 17:57:05 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     int memcmp(const void *s1, const void *s2, size_t n);
DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.
	 Both strings are assumed to be n bytes long.
RETURN VALUES
     The memcmp() function returns zero if the two strings are identical,
	 otherwise returns the difference between the first two differing bytes
	 (treated as unsigned char values, so that `\200' is greater than `\0', for
	 example). Zero-length strings are always identical.  This behavior is not
	 required by C and portable code should only depend on the sign of the
	 returned value.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*alt_s1;
	unsigned char	*alt_s2;

	alt_s1 = (unsigned char *)s1;
	alt_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (alt_s1[i] != alt_s2[i])
			return (alt_s1[i] - alt_s2[i]);
		i++;
	}
	return (0);
}
