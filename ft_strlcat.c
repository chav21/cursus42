/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:58:28 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:40:26 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	else
	{
		dst[i] = '\0';
		return (len_dst + len_src);
	}
}
