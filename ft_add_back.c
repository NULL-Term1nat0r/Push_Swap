/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:59:49 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/25 22:56:00 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_add_back(t_lst **head_ref, t_lst *new_node)
{
	t_lst	*tmp;
	tmp = (t_lst *)malloc(sizeof(t_lst));
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}
	tmp = ft_last(*head_ref);
	tmp->next = new_node;
	new_node-> next = NULL;
}
