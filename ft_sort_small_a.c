/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:53:59 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/19 18:23:57 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_reduce(t_lst **a, t_lst **b, int int_count, t_lst *stack)
{

	while (int_count != 3 || !((*a)->nbr < (*a)->next->nbr &&
			(*a)->next->nbr < (*a)->next->next->nbr))
		{
			if (int_count == 3)
			{
				if ((*a)->nbr > (*a)->next->nbr)
				{
					ft_sa(a);
				}
				else
					int_count = ft_push(stack, int_count, 0);
			}
			else if ((*a)->nbr > (*a)->next->nbr)
			{
				ft_sa(a);
			}
			else if (int_count++)
			{
				ft_pa(a, b, stack);
			}
		}
		return (int_count);
}

void	ft_sort_small_a(t_lst **a, t_lst **b, int int_count, t_lst *stack)
{
	int fst;
	int scd;

	fst = (*a)->nbr;
	scd = (*a)->next->nbr;

	if (int_count == 3 && stack->size_a == 3)
		ft_sort_three_a(a);
	else if (int_count == 2)
	{
		if (fst > scd)
			ft_sa(a);
	}
	else
	{
		int_count = ft_reduce(a, b, int_count, stack);
	}
}

//Z. 26 ist eine spezielle Bedingung, falls nur die obersten drei Elemente
//Z. 26 des insgesamt größeren Stack A bearbeitet werden.
