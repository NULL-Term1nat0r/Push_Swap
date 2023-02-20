/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:09:53 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/18 22:16:46 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_lst **head)
{
	t_lst *tmp;
	t_lst *last;
	
	tmp = *head;
	last = ft_last(*head);
	//Connecting head_ref to second node
	*head = (*head)->next;
	//Connecting last element to tmp;
	last->next = tmp;
	//setting tmp->next to NULL so the link list is closed again
	tmp->next = NULL;
	ft_printf("rb\n");
}
