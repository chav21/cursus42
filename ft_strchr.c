/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:08:16 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/18 17:45:46 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     char *strchr(const char *s, int c);
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
	 char) in the string pointed to by s.  The terminating null character is
	 considered to be part of the string; therefore if c is `\0', the functions
	 locate the terminating `\0'.
RETURN VALUES
     The function strchr() return a pointer to the located character, or NULL
	 if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	alt_c;
	char	*alt_s;
	int		i;

	i = 0;
	alt_s = (char *)s;
	alt_c = c;
	while (alt_s[i] != alt_c)
	{
		if (alt_s[i] == '\0')
			return (NULL);
		i++;
	}
	return (&alt_s[i]);
}
