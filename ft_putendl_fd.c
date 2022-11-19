/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:43:47 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/19 18:03:36 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	void	ft_putendl_fd(char *s, int fd);
DESCRIPCIÓN
	Envía la string 's' al file descriptor dado, seguido de un salto de línea.
	Se permite write.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
