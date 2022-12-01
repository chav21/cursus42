
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:03:27 by javier            #+#    #+#             */
/*   Updated: 2022/12/01 13:14:46 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	void	ft_lstiter(t_list *lst, void (*f)(void *));
DESCRIPTION
   Itera la lista 'lst' y aplica la función 'f' en el contenido de cada nodo.
   No devuelve nada. 
   lst: un puntero al primer nodo.
   f: un puntero a la función que utilizará cada nodo.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}