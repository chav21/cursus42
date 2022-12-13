/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:47:49 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:40:12 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
