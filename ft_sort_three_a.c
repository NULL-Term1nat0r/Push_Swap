/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:41:05 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 16:41:08 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three_a(t_lst *stack)
{
	if (stack->a->nbr > stack->a->next->nbr
		&& stack->a->nbr < stack->a->next->next->nbr)
		ft_sa(&stack->a);
	else if (stack->a->nbr > stack->a->next->nbr
		&& stack->a->nbr > stack->a->next->next->nbr
		&& stack->a->next->nbr > stack->a->next->next->nbr)
	{
		ft_sa(&stack->a);
		ft_rra(&stack->a);
	}
	else if (stack->a->nbr > stack->a->next->nbr
		&& stack->a->nbr > stack->a->next->next->nbr
		&& stack->a->next->nbr < stack->a->next->next->nbr)
		ft_ra(&stack->a);
	else if (stack->a->nbr < stack->a->next->nbr
		&& stack->a->nbr < stack->a->next->next->nbr)
	{
		ft_sa(&stack->a);
		ft_ra(&stack->a);
	}
	else
		ft_rra(&stack->a);
}
