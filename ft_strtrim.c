/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:29:23 by jacarras          #+#    #+#             */
/*   Updated: 2022/12/03 12:41:25 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getstart(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (!(ft_strchr(set, s1[i])))
			break ;
		i++;
	}
	return (i);
}

int	ft_getend(const char *s1, const char *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i > 0)
	{
		if (!(ft_strchr(set, s1[i - 1])))
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new_s1;

	if (!s1 || !set)
		return (NULL);
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	new_s1 = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!new_s1)
		return (NULL);
	ft_strlcpy(new_s1, s1 + start, end - start + 1);
	return (new_s1);
}
