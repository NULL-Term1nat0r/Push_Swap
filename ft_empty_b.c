/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:20:47 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/16 23:28:29 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_empty_b(t_lst *stack, int int_count)
{
	while (int_count--)
		ft_pa(&stack->a, &stack->b, stack);
	return (1);
}

//Reine Auslagerfunktion, um die 25 Zeilen pro Funktion einzuhalten.
