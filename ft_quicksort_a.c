/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:39:38 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 17:03:13 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_quicksort_a(t_lst *stack, int int_count, int rev)
{
	int	items;
	int	pivot;

	pivot = 0;
	items = int_count;
	if (ft_check_sort(&stack->a, int_count, 0) == 1)
		return (1);
	if (int_count <= 3)
	{
		ft_sort_small_a(int_count, stack);
		return (1);
	}
	if (!ft_get_pivot_element(&stack->a, &pivot, int_count))
		return (0);
	while (int_count != items / 2 + items % 2)
	{
		if (stack->a->nbr < pivot && int_count--)
			ft_pb(&stack->a, &stack->b, stack);
		else if (++rev)
			ft_ra(&stack->a);
	}
	while (items / 2 + items % 2 != stack->size_a && rev--)
		ft_rra(&stack->a);
	return (ft_return(stack, items));
}
//32 printf("median_a: %d\n", pivot);
//38 ft_print_list(&stack->a);
