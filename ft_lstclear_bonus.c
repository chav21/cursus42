
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:20:14 by javier            #+#    #+#             */
/*   Updated: 2022/12/01 13:20:15 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
SYNOPSIS
	void	ft_lstclear(t_list **lst, void (+del)(void *));
DESCRIPTION
   Elimina y libera el nodo 'lst' dado y todos los consecutivos de ese nodo,
   utilizando la función 'del' y free(3).
   Al final, el puntero a la lista debe ser NULL.
   lst: la dirección de un puntero a un nodo
   del: un puntero a función utilizado para eliminar el contenido de un nodo.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*aux;

	aux = *lst;
	if (!aux)
		return ;
	while (aux)
	{
		next = aux->next;
		del(aux->content);
		free(aux);
		aux = next;
	}
	*lst = NULL;
}
