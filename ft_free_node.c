/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:40:16 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/28 22:32:03 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free_node(t_lst **headref, t_lst *node)
{
	// check if it's the first element of the list
	if (node == *headref)
	{
		*headref = node->next;
		free(node);
	}
	// check if it's the last element of the list
	if (node->next == NULL)
	{
		ft_second_last(*headref)->next = NULL;
		free(node);
	}
}
