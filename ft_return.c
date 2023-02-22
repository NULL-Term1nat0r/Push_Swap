/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:37:53 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 16:37:55 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_return(t_lst *stack, int items)
{
	if (ft_quicksort_a(stack, items / 2 + items % 2, 0))
	{
		if (ft_quicksort_b(stack, items / 2, 0))
		{
			return (1);
		}
	}
	return (0);
}
// Die und-Bedingung wäre für norminette zu lang als return-Wert.
