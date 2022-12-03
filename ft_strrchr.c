/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:09:22 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:05:52 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     char *strrchr(const char *s, int c);
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
	 char) in the string pointed to by s.  The terminating null character is
	 considered to be part of the string; therefore if c is `\0', the functions
	 locate the terminating `\0'.
     The strrchr() function is identical to strchr(), except it locates the last
	 occurrence of c.
RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located
	 character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	alt_c;
	char	*alt_s;
	int		i;

	i = ft_strlen(s);
	alt_s = (char *)s;
	alt_c = c;
	if (alt_c == '\0')
		return (alt_s + i);
	while (i >= 0)
	{
		if (alt_s[i] == alt_c)
			return (alt_s + i);
		i--;
	}
	return (NULL);
}

/*
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ((const char)c))
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
*/