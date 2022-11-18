/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:48:02 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/18 18:13:03 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>
     char *strdup(const char *s1);
DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the string
	 s1, does the copy, and returns a pointer to it.  The pointer may
	 subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to
	 ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (&str[0]);
}
