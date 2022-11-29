/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacarras <jacarras@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:34:09 by javier            #+#    #+#             */
/*   Updated: 2022/11/29 18:58:26 by jacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
    t_list *ft_lstnew(void *content);
DESCRIPTION
    Crea un nuevo nodo utilizando malloc(3). La variable miembro 'content'
	(declarada en libft.h) se inicializa con el contenido del parámetro 'content'.
	La variable 'next' con NULL.
	Devuelve el nuevo nodo.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
