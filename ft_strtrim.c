/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:29:23 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/15 20:32:57 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
SYNOPSIS
	 char	*ft_strtrim(char const *s1, char const *set);
	 s1: la string que debe ser recortada.
	 set: los caracteres a eliminar de la string.
DESCRIPTION
    Elimina todos los caracteres de la string 'set' desde el principio y desde
	el final de 's1', hasta encontrar un caracter no perteneciente a 'set'. La
	string resultante se devuelve con una reserva de malloc (3).
	Valor devuelto: La string recortada. NULL si falla la reserva de memoria.
*/

#include "libft.h"
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	deb;
	size_t	j;
	size_t 	fin;
	char	*new_str;

	deb = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	while (set[j] != '\0')
	{
		if (s1[deb] == set[j])
			deb++;
		else
			j++;
	}
	j = 0;
	fin = len_s1;
	while (set[j] != '\0')
	{
		if (s1[fin] == set[j])
			fin--;
		else
			j++;
	}
	new_str = malloc(sizeof(char) * (len_s1 - (deb + fin) + 1));
	if (!new_str)
		return (NULL);
	return (ft_substr(s1, (unsigned int)deb, (fin - deb)));
}
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
	{
		i--;
	}
	str = ft_substr ((char *)s1, 0, i + 1);
	return (str);
}