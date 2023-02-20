/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:16:23 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/16 23:26:29 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_quicksort_b(t_lst **a, t_lst **b, t_lst *stack, int int_count, int rev)
{
	int	pivot;
	int	items;

	pivot = 0;
	items = int_count;
	if (ft_check_sort(b, int_count, 1) == 1)
		return (ft_empty_b(stack, int_count));
	if (int_count <= 3)
	{
		ft_sort_small_b(a, b, int_count, stack);
		return (1);
	}
	if (!ft_get_pivot_element(b, &pivot))
		return (0);
	while (int_count != items / 2)
	{
		if ((*b)->nbr >= pivot && int_count--)
			ft_pa(a, b, stack);
		else if (++rev)
			ft_rb(b);
	}
	while (items / 2 != stack->size_b && rev--)
		ft_rrb(b);
	return (ft_return(stack, items));
}

//Die in der vorherigen Rekursion übergebene Anzahl / 2 entspricht int_count.
//Bei ungeraden Zahlen wird abgerundet.
//Z. 35 ++rev, weil man sonst nicht Bedingung erfüllt
