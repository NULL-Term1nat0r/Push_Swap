/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:12:54 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/29 03:34:45 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rra(t_lst **head_ref)
{
	t_lst *last;
	t_lst *first;
	int data_first;
	int data_last;

	last = ft_last(*head_ref);
	first = *head_ref;
	data_last = last->nbr;
	data_first = first->nbr;
	first->nbr = data_last;
	last->nbr = data_first;
	ft_printf("rra\n");
}
