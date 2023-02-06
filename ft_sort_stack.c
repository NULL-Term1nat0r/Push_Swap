/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:52:44 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/05 18:21:58 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void ft_sort_small_2(t_lst **head_ref)
// {
// 	if ((*head_ref)->nbr < (*head_ref)->next->nbr)
// 		ft_sa(head_ref);
// 	else
// 		return;
// }

// static void ft_sort_small(t_lst **head_ref, int nbr_elements)
// {
// 	int first;
// 	int middle;
// 	int last;

// 	first = (*head_ref)->nbr;
// 	middle = (*head_ref)->next->nbr;
// 	last = 0;
// 	if (nbr_elements == 3)
// 		last = (*head_ref)->next->next->nbr;
// 	if (nbr_elements == 2)
// 	{
// 		if (first < middle)
// 			ft_sa(head_ref);
// 	}
// 	if (nbr_elements == 3)
// 	{
// 		ft_sort_small_elements(head_ref, first, middle, last);
// 	}
// }
void ft_sort_stack_chunk(t_lst **stack_A, t_lst **stack_B, int count, int pivot_element)
{
	t_lst *last;

	last = ft_last(*stack_A);

	while (count > 0)
	{
		if (last->nbr < pivot_element)
		{
			ft_pb(stack_A, stack_B);
		}
		if (last->nbr > pivot_element)
			ft_ra(stack_A);
		count--;
	}
	return;
}

// void ft_sort_stack_main(t_lst **stack_A, t_lst **stack_B)
// {
// 	int pivot_element;
// 	int size_A;

// 	size_A = ft_count_stack(*stack_A);

// 	pivot_element = ft_get_pivot_element(stack_A);
// 	ft_sort_stack_chunk(stack_A, stack_B, size_A/2, pivot_element);
// 	if (size_A > 2)
// 	{
// 		ft_sort_stack_main(stack_A, stack_B);
// 	}
// 	return;
// 	// if (size_A < 3)
// 	// {
// 	// 	ft_sort_small_2(stack_A);
// 	// }
// }
