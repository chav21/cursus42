/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:03:47 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/09 13:07:23 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <ctype.h>
     int tolower(int c);

DESCRIPTION
     The tolower() function converts an upper-case letter to the corresponding
	 lower-case letter.  The argument must be representable as an unsigned char
	 or the value of EOF.
RETURN VALUES
     If the argument is an upper-case letter, the tolower() function returns
	 the corresponding lower-case letter if there is one; otherwise, the argument
	 is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
