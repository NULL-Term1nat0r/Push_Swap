/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_repeat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:31:54 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/20 15:57:59 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_repeat(t_lst **stack)
{
	t_lst *tmp_1;
	t_lst *tmp_2;

	tmp_1 = *stack;
	if (tmp_1 == NULL)
		return;
	while (tmp_1->next != NULL)
	{
		tmp_2 = tmp_1;
		while (tmp_2->next != NULL)
		{
			if (tmp_1->nbr == tmp_2->next->nbr)
				ft_error(*stack);
			tmp_2 = tmp_2->next;
		}
		tmp_1 = tmp_1->next;
	}
}
