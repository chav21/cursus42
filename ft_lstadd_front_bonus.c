/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:52:44 by jacarras          #+#    #+#             */
/*   Updated: 2022/11/29 19:13:52 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	void	ft_lstadd_front(t_list **lst, t_list *new);
DESCRIPTION
   Añade el nodo 'new' al principio de la lista 'lst'.
   lst: la dirección de un puntero al primer nodo de una lista.
   new: un puntero al nodo que añadir al principio de la lista.
   NO devuelve nada.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
