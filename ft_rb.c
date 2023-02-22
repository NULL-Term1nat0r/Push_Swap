/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:39:56 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 16:39:58 by estruckm         ###   ########.fr       */
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
