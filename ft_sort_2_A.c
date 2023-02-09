/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2_A.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:59:25 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/08 20:56:06 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_2_A(t_lst **head_ref)
{
	t_lst *last;
	t_lst *second_last;

	last = ft_last(*head_ref);
	second_last = ft_second_last(*head_ref);

	last->index = -1;
	second_last->index = -1;

	if (last->nbr > second_last->nbr)
	{
		ft_sa(head_ref);
	}
	else
		return;
}
