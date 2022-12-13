/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:39:38 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:37:20 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*alt_s1;
	unsigned char	*alt_s2;

	alt_s1 = (unsigned char *)s1;
	alt_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (alt_s1[i] != alt_s2[i])
			return (alt_s1[i] - alt_s2[i]);
		i++;
	}
	return (0);
}
