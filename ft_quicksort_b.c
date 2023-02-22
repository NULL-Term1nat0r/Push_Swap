/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:07:21 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 02:16:04 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_quicksort_b(t_lst *stack, int int_count, int rev)
{
	int	pivot;
	int	items;

	pivot = 0;
	items = int_count;
	if (ft_check_sort(&stack->b, int_count, 1) == 1)
		return (ft_empty_b(stack, int_count));
	if (int_count <= 3)
	{
		ft_sort_small_b(int_count, stack);
		return (1);
	}
	if (!ft_get_pivot_element(&stack->b, &pivot, int_count))
		return (0);
	printf("median_b: %d\n", pivot);
	while (int_count != items / 2)
	{
		if (stack->b->nbr >= pivot && int_count--)
			ft_pa(&stack->a, &stack->b, stack);
		else if (++rev)
			ft_rb(&stack->b);
	}
	ft_print_list(&stack->b);
	while (items / 2 != stack->size_b && rev--)
		ft_rrb(&stack->b);
	return (ft_return(stack, items));
}

//Die in der vorherigen Rekursion übergebene Anzahl / 2 entspricht int_count.
//Bei ungeraden Zahlen wird abgerundet.
//Z. 35 ++rev, weil man sonst nicht Bedingung erfüllt
