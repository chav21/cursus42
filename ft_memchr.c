/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:52:39 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/10 13:38:36 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     void *memchr(const void *s, int c, size_t n);
DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
	 unsigned char) in string s.
RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no
	 such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	alt_c;
	unsigned char	*alt_s;

	i = 0;
	alt_c = c;
	alt_s = (unsigned char *)s;
	while (i < n)
	{
		if (alt_s[i] == alt_c)
			return ((void *)&alt_s[i]);
		i++;
	}
	return (NULL);
}
