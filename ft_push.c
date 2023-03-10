/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:39:31 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 16:39:33 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_lst *stack, int int_count, int buf)
{
	if (buf == 0)
		ft_pb(&stack->a, &stack->b, stack);
	else
		ft_pa(&stack->a, &stack->b, stack);
	int_count--;
	return (int_count);
}

//Pusht und verringert zusätzlich int_count
