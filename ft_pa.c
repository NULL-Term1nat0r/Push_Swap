/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:21:53 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/18 22:16:25 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_lst **a, t_lst **b, t_lst *stack)
{
	t_lst *tmp_a;
	t_lst *tmp_b;

	tmp_b = (*b);
	tmp_a = (*a);
	stack->size_a++;
	stack->size_b--;

	*b = (*b)->next;
	*a = tmp_b;
	tmp_b->next = tmp_a;
	ft_printf("pa\n");
}

//Stapel A wird nach unten verschoben, Stapel B nach oben.
