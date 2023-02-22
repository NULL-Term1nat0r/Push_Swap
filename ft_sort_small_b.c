/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:40:55 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 16:40:57 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small_b(int int_count, t_lst *stack)
{
	if (int_count == 2)
	{
		if (stack->b->nbr < stack->b->next->nbr)
			ft_sb(&stack->b);
		while (int_count--)
			ft_pa(&stack->a, &stack->b, stack);
	}
	else
	{
		while (int_count || !(stack->a->nbr < stack->a->next->nbr
				&& stack->a->next->nbr < stack->a->next->next->nbr))
		{
			if (int_count == 1 && stack->a->nbr > stack->a->next->nbr)
				ft_sa(&stack->a);
			else if (int_count == 1 || (stack->b->nbr > stack->b->next->nbr))
				int_count = ft_push(stack, int_count, 1);
			else if (int_count == 3
				&& stack->b->nbr > stack->b->next->next->nbr)
				int_count = ft_push(stack, int_count, 1);
			else
				ft_sb(&stack->b);
		}
	}
}
