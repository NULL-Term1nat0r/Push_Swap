/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:15:17 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/08 19:21:17 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_if_sorted(t_lst **stack_A, int count_stack)
{
	t_lst *tmp;

	tmp = *stack_A;
	while (count_stack - 1 != 0 && tmp->next > tmp)
	{
		tmp = tmp->next;
		count_stack--;
	}
	if (count_stack == 0)
		return (0);
	else
		return (1);
}
