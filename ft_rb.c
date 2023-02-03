/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:12:54 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/03 22:31:10 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_lst **head_ref)
{
	t_lst *last;
	int data_last;

	last = ft_last(*head_ref);
	data_last = last->nbr;
	ft_free_node(head_ref, last);
	ft_push_front(head_ref, data_last);
	ft_printf("rb\n");
}
