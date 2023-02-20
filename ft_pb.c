/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:53:31 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/18 22:16:30 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_lst **a, t_lst **b, t_lst *stack)
{
	t_lst *tmp_a;
	t_lst *tmp_b;

	tmp_b = (*b);
	tmp_a = (*a);
	stack->size_a--;
	stack->size_b++;
	if (*b == NULL)
	{
		*a = (*a)->next;
		*b = tmp_a;
		tmp_a->next = NULL;
	}
	else
	{
		*a = (*a)->next;
		*b = tmp_a;
		tmp_a->next = tmp_b;
	}
	ft_printf("pb\n");
}
