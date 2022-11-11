/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:16:30 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/11 20:28:00 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <stdlib.h>
     void *calloc(size_t count, size_t size);
DESCRIPTION
     The malloc(), calloc(), valloc(), realloc(), and reallocf() functions
	 allocate memory.  The allocated memory is aligned such that it can be used
	 for any data type, including AltiVec- and SSE- related types.  The
	 aligned_alloc() function allocates memory with the requested alignment.
	 The free() function frees allocations that were created via the preceding
	 allocation functions.

     The malloc() function allocates size bytes of memory and returns a pointer
	 to the allocated memory.

     The calloc() function contiguously allocates enough space for count objects
	 that are size bytes of memory each and returns a pointer to the allocated
	 memory.  The allocated memory is filled with bytes of value zero.

RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and
	 aligned_alloc() functions return a pointer to allocated memory.  If there
	 is an error, they return a NULL pointer and set errno to ENOMEM.
*/

#include "libft.h"
/*
void	*ft_calloc(size_t count, size_t size)
{
	
}



void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}

*/
void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (memory == NULL)
		return (0);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}



