/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:01 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/22 01:40:31 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_lst **head)
{
	t_lst	*tmp;
	t_lst	*last;

	tmp = *head;
	last = ft_last(*head);
	*head = (*head)->next;
	last->next = tmp;
	tmp->next = NULL;
	ft_printf("\033[31mra\033[0m\n");
}
