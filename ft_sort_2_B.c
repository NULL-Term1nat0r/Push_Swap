/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2_B.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:59:25 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/08 21:06:43 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_2_B(t_lst **stack_A, t_lst **stack_B)
{
	t_lst *last;
	t_lst *second_last;

	last = ft_last(*stack_B);
	second_last = ft_second_last(*stack_B);

	if (last->nbr > second_last->nbr)
		ft_sb(stack_B);
	// last->index = -1;
	// second_last->index = -1;
	ft_pa(stack_A, stack_B);
	ft_pa(stack_A, stack_B);
}
