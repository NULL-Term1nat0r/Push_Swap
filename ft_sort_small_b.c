/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:33:47 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/20 15:13:17 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_reduce(t_lst **a, t_lst **b, int int_count, t_lst *stack)
{

		if ((*b)->nbr < (*b)->next->nbr)
			ft_sb(b);
		while (int_count--)
			ft_pa(a, b, stack);
}
void	ft_sort_small_b(t_lst **a, t_lst **b, int int_count, t_lst *stack)
{
	int fst;
	int scd;
	int trd;

	if (int_count == 2)
		ft_reduce(a, b, int_count, stack);
	else
	{
		fst = (*a)->nbr;
		scd = (*a)->next->nbr;
		trd = (*a)->next->next->nbr;
		while (int_count || !(fst < scd && scd < trd))
		{
			if (int_count == 1 && (*a)->nbr > (*a)->next->nbr)
				ft_sa(a);
			else if (int_count == 1 || ((*b)->nbr > (*b)->next->nbr))
				int_count = ft_push(stack, int_count, 1);
			else if (int_count == 3 && (*b)->nbr > (*b)->next->next->nbr)
				int_count = ft_push(stack, int_count, 1);
			else
				ft_sb(b);
		}
	}
}

//ft_push dekrementiert im Gegensatz zu ft_pa/pb int_count um 1
//Die zwei else if, weil die oder-Bedingung zu lang für Norminette wäre.
//Z. 30/32 Pusht alles auf a was nicht das kleinste Element ist,
//Z. 28 sortiert dann die zwei auf a
//Z. 30 und pusht das letzte Element.
//ft_sort_three_a geht hier nicht, da andersrum sortiert werden muss.
//und kein rb/rrb verwendet werden darf.

