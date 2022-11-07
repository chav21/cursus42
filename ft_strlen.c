/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:05:06 by javier            #+#    #+#             */
/*   Updated: 2022/10/05 11:15:40 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     size_t strlen(const char *s);
RETURN VALUES
     The strlen() function returns the number of characters that precede the terminating NUL character. 
*/

size_t ft_strlen(const char *s)
{
    size_t i;
    
    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}
