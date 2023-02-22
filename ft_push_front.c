/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:42:05 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/21 02:32:19 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_front(t_lst **head_ref, int new_data)
{
	t_lst	*new_node;

	new_node = (t_lst *)malloc(sizeof(t_lst));
	if (!new_node)
		return (0);
	new_node->nbr = new_data;
	new_node->next = (*head_ref);
	*head_ref = new_node;
	return (1);
}
