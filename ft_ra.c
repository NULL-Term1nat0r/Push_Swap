/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:12:54 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/05 16:34:40 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_lst **head_ref)
{
	t_lst *last;
	t_lst *second_last;
	t_lst *first;

	last = ft_last(*head_ref);
	second_last = ft_second_last(*head_ref);
	first = *head_ref;
	*head_ref = last;
	last->next = first;
	second_last->next = NULL;
	ft_printf("ra\n");
}
