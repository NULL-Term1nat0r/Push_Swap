/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:38:27 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 16:38:30 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_empty_b(t_lst *stack, int int_count)
{
	while (int_count--)
		ft_pa(&stack->a, &stack->b, stack);
	return (1);
}
