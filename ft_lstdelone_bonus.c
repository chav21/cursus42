
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:18:25 by javier            #+#    #+#             */
/*   Updated: 2022/12/01 12:38:55 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
	void	ft_lstdelone(t_list *lst, void (*del)(void *));
DESCRIPTION
   Toma como parámetro un nodo 'lst' y libera la memoria del contenido
   utilizando la función 'del' dada como parámetro, además de liberar el nodo.
   La memoria de 'next' NO debe liberarse.
   NO devuelve nada. 
   lst: el nodo a liberar.
   del: un puntero a la función utilizada para liberar el contenido del nodo.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del (lst->content);
	free (lst);
}

