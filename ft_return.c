/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:26:56 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/19 00:17:49 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_return(t_lst *stack, int items)
{
	if (ft_quicksort_a(&stack->a, &stack->b, stack, items / 2 + items % 2, 0))
	{
		if (ft_quicksort_b(&stack->a, &stack->b, stack, items / 2, 0))
		{
			return (1);
		}
	}
	return (0);
}

// Die und-Bedingung wäre für norminette zu lang als return-Wert.
