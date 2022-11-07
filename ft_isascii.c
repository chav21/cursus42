/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:22:13 by javier            #+#    #+#             */
/*   Updated: 2022/10/05 10:29:18 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <ctype.h>
     int isascii(int c);
RETURN
Returns nonzero if c can be represented as a character in the 7–bit US-ASCII character set. Otherwise, it returns 0.
*/

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return(1);
    return(0);
}
