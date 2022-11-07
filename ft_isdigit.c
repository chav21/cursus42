/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:13:57 by javier            #+#    #+#             */
/*   Updated: 2022/10/05 10:13:59 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <ctype.h>

     int isdigit(int c);
RETURN VALUES
     The isdigit() and isnumber() functions return zero if the character tests false and return non-zero if the character tests true.
*/

int ft_isdigit(int c)
{
    if(c >= 0 && c <= 9)
        return(1);
    return(0);
}