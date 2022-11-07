/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:13:50 by javier            #+#    #+#             */
/*   Updated: 2022/10/05 10:13:53 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <ctype.h>
     int isalpha(int c);
RETURN VALUES
     The isalpha() function returns zero if the character tests false and returns non-zero if the character tests true.
*/

int ft_isalpha(int c)
{
    if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        return (1);
    return (0);
}
