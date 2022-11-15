/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:47:49 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/15 19:01:35 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	 char *ft_strjoin(char const *s1, char const *s2);
DESCRIPTION
     Hay que añadir s2 a s1 y devolver la nueva string. NULL si falla reserva de
	 memoria. Reserva (con malloc(3)) y devuelve una nueva string, formada por
	 la concatenación de s1 y s2.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	tot_len;
	char	*s3;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	tot_len = s1_len + s2_len;
	s3 = malloc(sizeof(char) * tot_len + 1);
	if (!s3)
		return (NULL);
	ft_memmove(s3, s1, s1_len);
	ft_memmove(s3 + s1_len, s2, s2_len);
	s3[tot_len] = '\0';
	return (s3);
}
