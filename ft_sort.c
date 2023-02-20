/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:35:37 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/16 23:22:54 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_lst **a, t_lst **b, t_lst *stack, int int_count)
{
	if (ft_check_sort(a, stack->size_a, 0) == 0)
	{
		if (int_count == 2)
			ft_sa(a);
		else if (int_count == 3)
			ft_sort_three_a(a);
		else
			ft_quicksort_a(a, b, stack, int_count, 0);
	}
}
