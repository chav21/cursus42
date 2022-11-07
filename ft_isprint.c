/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:31:50 by javier            #+#    #+#             */
/*   Updated: 2022/10/05 10:36:47 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <ctype.h>

     int
     isprint(int c);
RETURN VALUES
     The isprint() function returns zero if the character tests false and returns non-zero if the character tests true.
*/

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return(1);
    return(0);
}