/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:34:58 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/19 18:04:32 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	void	ft_striteri(char *s, void (*f)(unsigned int, char*));
DESCRIPCIÓN
	A cada carácter de la string 's', apica la función 'f' dando como
	parámetros el índice de cada carácter dentro de 's' y la dirección del
	propio carácter, que podrá modificarse si es necesario.
	s: la string que iterar.
	f : la función a aplicar sobre cada carácter.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
