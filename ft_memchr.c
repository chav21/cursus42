/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:52:39 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:37:14 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	alt_c;
	unsigned char	*alt_s;

	i = 0;
	alt_c = c;
	alt_s = (unsigned char *)s;
	while (i < n)
	{
		if (alt_s[i] == alt_c)
			return ((void *)&alt_s[i]);
		i++;
	}
	return (NULL);
}
