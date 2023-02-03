/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:12:54 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/03 22:31:16 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrb(t_lst **head_ref)
{
 	t_lst *tmp = NULL;

	tmp = *head_ref;
	ft_printf("first line\n");
	*head_ref = (*head_ref)->next;
	ft_printf("second line\n");
	ft_add_back(head_ref, tmp);
	ft_printf("rrb\n");
}
