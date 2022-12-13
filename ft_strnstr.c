/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:57:49 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:44:59 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			length;
	char		*alt_haystack;

	if (!*needle)
		return ((char *)haystack);
	alt_haystack = (char *)haystack;
	i = 0;
	length = ft_strlen(needle);
	while (alt_haystack[i] && (i + length) <= len)
	{
		if (ft_strncmp((alt_haystack + i), needle, length) == 0)
		{
			return (alt_haystack + i);
		}
		i++;
	}
	return (NULL);
}
