/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:09:09 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/22 01:41:13 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_lst **head)
{
	t_lst	*tmp;
	t_lst	*last;
	t_lst	*second_last;

	tmp = *head;
	last = ft_last(*head);
	second_last = ft_second_last(*head);
	*head = last;
	last->next = tmp;
	second_last->next = NULL;
	ft_printf("\033[31mrra\033[0m\n");
}
