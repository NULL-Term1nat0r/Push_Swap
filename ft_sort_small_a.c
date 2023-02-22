/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:53:59 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/22 00:23:17 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small_a(int int_count, t_lst *stack)
{
	if (int_count == 3 && stack->size_a == 3)
		ft_sort_three_a(stack);
	else if (int_count == 2)
	{
		if (stack->a->nbr > stack->a->next->nbr)
			ft_sa(&stack->a);
	}
	else
	{
		while (int_count != 3 || !(stack->a->nbr < stack->a->next->nbr
				&& stack->a->next->nbr < stack->a->next->next->nbr))
		{
			if (int_count == 3)
			{
				if (stack->a->nbr > stack->a->next->nbr)
					ft_sa(&stack->a);
				else
					int_count = ft_push(stack, int_count, 0);
			}
			else if (stack->a->nbr > stack->a->next->nbr)
				ft_sa(&stack->a);
			else if (int_count++)
				ft_pa(&stack->a, &stack->b, stack);
		}
	}
}

//Z. 26 ist eine spezielle Bedingung, falls nur die obersten drei Elemente
//Z. 26 des insgesamt größeren Stack A bearbeitet werden.
