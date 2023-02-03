/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:52:44 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/03 23:21:09 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void ft_sort_small_2(t_lst **head_ref)
// {
// 	if ((*head_ref)->nbr < (*head_ref)->next->nbr)
// 		ft_sa(head_ref);
// }
static void ft_sort_small_elements(t_lst **head_ref, int first, int middle, int last)
{
	if (first < middle && middle > last && last > first)
		{
				ft_ra(head_ref);
				ft_ra(head_ref);
		}
		if (first > middle && middle < last && last < first)
		{
			ft_sa(head_ref);
		}
		if (first < middle && middle > last)
		{
			ft_rra(head_ref);
			ft_sa(head_ref);
		}
		if (first > middle && last > first)
		{
			ft_ra(head_ref);
		}
		if (first < middle && middle < last)
		{
			ft_ra(head_ref);
			ft_sa(head_ref);
		}
}
static void ft_sort_small(t_lst **head_ref, int nbr_elements)
{
	int first;
	int middle;
	int last;

	first = (*head_ref)->nbr;
	middle = (*head_ref)->next->nbr;
	last = 0;
	if (nbr_elements == 3)
		last = (*head_ref)->next->next->nbr;
	if (nbr_elements == 2)
	{
		if (first < middle)
			ft_sa(head_ref);
	}
	if (nbr_elements == 3)
	{
		ft_sort_small_elements(head_ref, first, middle, last);
	}
}
int ft_sort_stack(t_lst **stack_A, t_lst **stack_B, int size_A, int size_B)
{
	int pivot_element;
	t_lst *last;

	last = ft_last(*stack_A);
	pivot_element = ft_get_pivot_element(stack_A);
	if (size_A <= 3)
	{
		ft_sort_small(stack_A, size_A);
	}
	if (size_A > 3)
	{
		if (last->nbr < pivot_element)
		{
			ft_pb(stack_A, stack_B);
			size_A--;
			size_B++;
		}
		if (last->nbr > pivot_element)
			ft_ra(stack_A);
		ft_sort_stack(stack_A, stack_B, size_A, size_B);
	}

	return (size_A);
}
