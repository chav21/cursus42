/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:00:14 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/19 16:34:29 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
DESCRIPCIÓN
	A cada carácter de la string 's', aplica la función 'f' cando como
	parámetros el índice de cada fcarácter dentro de 's' y el propioo carácter.
	Genera una nueva string con el resultado del uso sucesivo de 'f'.
	s: la string que iterar.
	f: la función a aplicar sobre cada carácter.
	DEVUELVE la sting creada tras el correcto uso de 's' sobre cada carácter.
	NULL si falla la reserva de memoria (malloc).
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
