/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:15:25 by javier            #+#    #+#             */
/*   Updated: 2022/11/07 13:27:22 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
SYNOPSIS
	 #include <ctype.h>
	 int isalnum(int c);
RETURN VALUES
	 The isalnum() function returns zero if the character tests false and 
	 returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
