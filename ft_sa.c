/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 00:18:36 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/29 03:28:04 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_lst **head_ref)
{
	t_lst *second_last;
	int data_second_last;
	int data_last;

	second_last = ft_second_last(*head_ref);
	data_second_last = second_last->nbr;
	data_last = second_last->next->nbr;
	second_last->nbr = data_last;
	second_last->next->nbr = data_second_last;
	ft_printf("sa\n");
}
