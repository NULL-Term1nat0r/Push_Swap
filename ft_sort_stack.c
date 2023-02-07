/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:52:44 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/07 23:01:06 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void ft_sort_small_elements(t_lst **head_ref, int first, int middle, int last)
{
	if (first > middle && middle > last && last < first)
		return;
	if (first < middle && middle < last && last > first)
	{
		ft_ra(head_ref);
		ft_sa(head_ref);
	}
	if (first < middle && middle > last && last > first)
	{
		ft_ra(head_ref);
		ft_ra(head_ref);
	}
	if (first > middle && middle < last && last > first)
		ft_ra(head_ref);
	if (first < middle && middle > last && last < first)
	{
		ft_sa(head_ref);
		ft_ra(head_ref);
	}
	if (first > middle && middle < last && last < first)
		ft_sa(head_ref);
}
static void ft_sort_small_A(t_lst **head_ref)
{
	int first;
	int middle;
	int last;
	int nbr_elements;

	nbr_elements = ft_count_stack(*head_ref);
	first = (*head_ref)->nbr;
	middle = (*head_ref)->next->nbr;
	last = 0;
	if (nbr_elements == 2)
	{
		if (first < middle)
			ft_sa(head_ref);
	}
	if (nbr_elements == 3)
	{
		last = (*head_ref)->next->next->nbr;
		ft_sort_small_elements(head_ref, first, middle, last);
	}
}

static void ft_sort_stack_chunk_A(t_lst **stack_A, t_lst **stack_B)
{
	t_lst *last;
	int pivot_element;
	int count_stack;
	static int count_index;

	count_stack = ft_count_stack(*stack_A);
	pivot_element = ft_get_pivot_element(stack_A, ft_index(stack_A));
	while (count_stack != 0)
	{
		last = ft_last(*stack_A);
		if (last->nbr < pivot_element)
		{
			last->index = count_index;
			ft_pb(stack_A, stack_B);
		}
		else
			ft_ra(stack_A);
		count_stack--;
	}
	count_index++;
	if (ft_count_stack(*stack_A) > 3)
		ft_sort_stack_chunk_A(stack_A, stack_B);
	ft_sort_small_A(stack_A);
}

// static void ft_sort_stack_chunk_B(t_lst **stack_A, t_lst **stack_B)
// {
// 	t_lst *last;
// 	int pivot_element;
// 	int count_stack;
// 	static int count_index;

// 	count_stack = ft_index_check(stack_B, ft_index(stack_B));
// 	pivot_element = ft_get_pivot_element(stack_B, ft_index(stack_B));
// 	while (count_stack != 0 && count_stack > 2)
// 	{
// 		last = ft_last(*stack_B);
// 		if (last->nbr >= pivot_element)
// 		{
// 			last->index =
// 			last->index+1;
// 			ft_pa(stack_A, stack_B);
// 		}
// 		else
// 			ft_rb(stack_B);
// 		count_stack--;
// 	}

// 	if (ft_index_check(*stack_A) > 3)
// 		ft_sort_stack_chunk_A(stack_A, stack_B);
// 	ft_sort_small_B(stack_A);
// }


void ft_sort_stack_main(t_lst **stack_A, t_lst **stack_B)
{
	int count_index;

	count_index = 1;
	if (ft_count_stack(*stack_A) > 3)
	{
		ft_sort_stack_chunk_A(stack_A, stack_B);
		// ft_sort_stack_chunk_B(stack_A, stack_B);
		//ft_sort_stack_main(stack_A, stack_B);
		// printf("\n%d", ft_get_pivot_element(stack_A, ft_index(stack_A)));
	}
}
