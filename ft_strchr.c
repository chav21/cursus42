/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:08:16 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:39:49 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	alt_c;
	char	*alt_s;
	int		i;

	i = 0;
	alt_s = (char *)s;
	alt_c = c;
	while (alt_s[i] != alt_c)
	{
		if (alt_s[i] == '\0')
			return (NULL);
		i++;
	}
	return (&alt_s[i]);
}
