/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:34:15 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/19 18:03:55 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	void	ft_putstr_fd(char *s, int fd);
DESCRIPCIÓN
	Envía la string 's' al file descriptor especificado.
	s: la string a enviar.
	fd: el file descriptor sobre el que escribir.
	Se permite write.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
