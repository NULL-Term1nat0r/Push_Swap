/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:12:54 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/08 21:21:12 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrb(t_lst **head_ref)
{
 	t_lst *tmp;

	tmp = *head_ref;
	*head_ref = (*head_ref)->next;
	ft_add_back(head_ref, tmp);
	ft_printf("rrb\n");
}
