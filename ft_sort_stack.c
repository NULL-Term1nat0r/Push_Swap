/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:52:44 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/09 01:07:00 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_sort_chunk_B(t_lst **stack_A, t_lst **stack_B)
{
	t_lst *last;
	int pivot_element;
	int count_stack;
	int count_index;
	int count_rb;
	static int count_index_2;

	count_rb = 0;
	count_index = 1 + count_index_2;

	count_stack = ft_check_index(stack_B);
	if (count_stack > 2)
	{
		pivot_element = ft_get_pivot_element(stack_B);

		printf("%d\n", ft_index(stack_B));
		while (count_stack != 0)
		{
			last = ft_last(*stack_B);
			if (last->nbr < pivot_element)
			{
				last->index = last->index + 1;
				ft_pa(stack_A, stack_B);
			}
			else
			{
				ft_rb(stack_B);
				count_rb++;
				count_stack--;
			}
		}
	}
	while (count_rb != 0)
	{
		ft_rrb(stack_B);
		count_rb--;
	}
	count_index_2++;
	if (ft_check_index(stack_B) > 2)
		ft_sort_chunk_B(stack_A, stack_B);
	ft_sort_2_B(stack_A, stack_B);
}

static void ft_sort_chunk_A(t_lst **stack_A, t_lst **stack_B)
{
	t_lst *last;
	int pivot_element;
	int count_stack;
	int count_index;
	int count_ra;
	static int count_index_2;

	count_ra = 0;
	count_index = 1 + count_index_2;
	if (ft_last(*stack_A)->index != -1)
	{
		count_stack = ft_check_index(stack_A);
		if (count_stack > 2)
		{
			pivot_element = ft_get_pivot_element(stack_A);
			while (count_stack != 0)
			{
				last = ft_last(*stack_A);
				if (last->nbr < pivot_element)
				{
					last->index = last->index + 1;
					ft_pb(stack_A, stack_B);
				}
				else
				{
					ft_ra(stack_A);
					count_ra++;
					count_stack--;
				}
			}
		}
		while (count_ra != 0)
		{
			ft_rra(stack_A);
			count_ra--;
		}
		count_index_2++;
		if (ft_check_index(stack_A) > 2)
			ft_sort_chunk_A(stack_A, stack_B);
		ft_sort_2_A(stack_A);
	}
}



void ft_sort_stack_main(t_lst **stack_A, t_lst **stack_B, int size_A)
{
	ft_sort_chunk_B(stack_A, stack_B);
	ft_sort_chunk_A(stack_A, stack_B);
	printf("%d\n", ft_index(stack_B));
	ft_sort_chunk_B(stack_A, stack_B);
	// ft_sort_chunk_A(stack_A, stack_B);
// 	if (ft_check_if_sorted(stack_A, size_A) == 1)
// 		ft_sort_stack_main(stack_A, stack_B, size_A);
// 	else
// 		return;
}
