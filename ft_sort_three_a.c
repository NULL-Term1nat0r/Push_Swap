/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:00:37 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/16 22:49:49 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three_a(t_lst **s)
{
	int fst;
	int scd;
	int trd;

	fst = (*s)->nbr;
	scd = (*s)->next->nbr;
	trd = (*s)->next->next->nbr;

	if (fst > scd && fst < trd)
		ft_sa(s);
	else if (fst > scd && fst > trd && scd > trd)
	{
		ft_sa(s);
		ft_rra(s);
	}
	else if (fst > scd && fst > trd && scd < trd)
		ft_ra(s);
	else if (fst < scd && fst < trd)
	{
		ft_sa(s);
		ft_ra(s);
	}
	else
		ft_rra(s);
}
