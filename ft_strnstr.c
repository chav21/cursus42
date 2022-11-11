/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:57:49 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/11 18:24:11 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     char *strnstr(const char *haystack, const char *needle, size_t len);
DESCRIPTION
     The strstr() function locates the first occurrence of the null-terminated
	 string needle in the null-terminated string haystack.

     The strnstr() function locates the first occurrence of the null-terminated
	 string needle in the string haystack, where not more than len characters
	 are searched.  Characters that appear after a `\0' character are not
	 searched.  Since the strnstr() function is a FreeBSD specific API, it
	 should only be used when portability is not a concern.
RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
	 nowhere in haystack, NULL is returned; otherwise a pointer to the first
	 character of the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	if (!needle)
		return ((char *)haystack);
	while (len > 0)
	{
		while (needle)
		{
			if (needle[i] == haystack[j])
				return (NULL);
			i++;
		}
		j++;
		i = 0;
		len--;
	}
	return ((char *)needle);
}
