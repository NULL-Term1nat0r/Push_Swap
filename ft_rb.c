/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:09:53 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/22 01:39:55 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_lst **head)
{
	t_lst	*tmp;
	t_lst	*last;

	tmp = *head;
	last = ft_last(*head);
	*head = (*head)->next;
	last->next = tmp;
	tmp->next = NULL;
	ft_printf("\033[32mrb\033[0m\n");
}
