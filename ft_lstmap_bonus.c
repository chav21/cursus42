/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:21:29 by javier            #+#    #+#             */
/*   Updated: 2022/12/01 13:46:43 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
SYNOPSIS
	t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
DESCRIPTION
   Itera la lista 'lst' y aplica la función 'f' al contenido de cada nodo. Crea
   una lista resultante de la aplicación correcta y sucesiva de la función 'f'
   sobre cada nodo. La función 'del' se utiliza paa eliminar el contenido de un
   nodo, si hace falta.
   lst: un puntero a un nodo.
   f: la dirección de un puntero a una función usada en la iteración de cada
   elemento de la lista.
   del: un puntero a función utilizado para eliminar el contenido de un nodo, si
   es necesario.
   Devuelve la nueva lista. NULL si falla la reserva de memoria.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}

