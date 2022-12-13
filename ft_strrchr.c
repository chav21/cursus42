/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:09:22 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:41:18 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	alt_c;
	char	*alt_s;
	int		i;

	i = ft_strlen(s);
	alt_s = (char *)s;
	alt_c = c;
	if (alt_c == '\0')
		return (alt_s + i);
	while (i >= 0)
	{
		if (alt_s[i] == alt_c)
			return (alt_s + i);
		i--;
	}
	return (NULL);
}

/*
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ((const char)c))
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
*/