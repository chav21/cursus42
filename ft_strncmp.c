/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:15:04 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/10 12:51:10 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     int strncmp(const char *s1, const char *s2, size_t n);
DESCRIPTION
     The strncmp() function lexicographically compare the null-terminated
	 strings s1 and s2.
     The strncmp() function compares not more than n characters. 
	 Because strncmp() is designed for comparing strings rather than binary data,
	 characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strncmp() function return an integer greater than, equal to, or less
	 than 0, according as the string s1 is greater than, equal to, or less than
	 the string s2.  The comparison is done using un, so that
	 `\200' is greater than `\0'.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if (s1[i] > s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
