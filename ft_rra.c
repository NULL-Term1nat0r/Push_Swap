/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:09:09 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/20 15:11:53 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_lst **head)
{
	t_lst *tmp;
	t_lst *last;
	t_lst *second_last;

	tmp = *head;
	last = ft_last(*head);
	second_last = ft_second_last(*head);
	//setting head pointer to last element
	*head = last;
	//setting next element of last to tmp (previous *head)
	last->next = tmp;
	//setting the second_last element to NULL, so link list is closed
	second_last->next = NULL;
	ft_printf("rra\n");
}
