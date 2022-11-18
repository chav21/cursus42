/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:33:02 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/18 19:34:29 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
    char	*ft_itoa(int n);
DESCRIPTION
    Utilizando malloc(3), genera una string que represente el valor entero
	recibido como argumento. Los números negativos tienen que gestionarese.
	n: el entero a convertir. 
	 
RETURN VALUES
     Devuelve la string que represente el número. NULL si falla la reserva de 
	 memoria.
*/

#include "libft.h"
/*
char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof)char * 
}

*/

int	len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len = 1;
	else if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		i;

	nb = n;
	i = len(nb);
	str = (char *)malloc (sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (str);
}
