/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:56:59 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/19 17:43:11 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	void	ft_putchar_fd(char c, int fd);
DESCRIPCIÓN
	Envía el carácter 'c' al file descriptor especificado.
	c: el carácter a enviar.
	fd: el file descriptor sobre el que escribir.
	Función autotirada: write.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
