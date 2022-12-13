/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:46:08 by javier            #+#    #+#             */
/*   Updated: 2022/12/03 12:39:40 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_str(char const *s1, char c)
{
	int	cont;
	int	num;

	cont = 0;
	num = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			num = 0;
		else if (num == 0)
		{
			num = 1;
			cont++;
		}
		s1++;
	}
	return (cont);
}

int	num_char(char const *s2, char c, int i)
{
	int	lenght;

	lenght = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		lenght++;
		i++;
	}
	return (lenght);
}

char	**ft_free(const char **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

char	**ft_oper(const char *s, char **dst, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * num_char(s, c, i) + 1);
		if (dst[j] == NULL)
			return (ft_free((char const **)dst, j));
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	l;
	char	**dst;

	if (!s)
		return (NULL);
	l = ft_num_str(s, c);
	dst = ((char **)malloc(sizeof(char *) * (l + 1)));
	if (!dst)
		return (NULL);
	return (ft_oper(s, dst, c, l));
}
