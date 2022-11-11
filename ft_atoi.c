/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:11:43 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/11 20:15:55 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <stdlib.h>
     int atoi(const char *str);
DESCRIPTION
     The atoi() function converts the initial portion of the string pointed to
	 by str to int representation.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned int	value;

	sign = 1;
	value = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (ft_isdigit(*str))
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return (value * sign);
}
