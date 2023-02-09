/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 23:52:44 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/08 22:28:11 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_pa(t_lst **head_ref_1, t_lst **head_ref_2)
{
	t_lst	*tmp;

	tmp = ft_last(*head_ref_2);
	ft_add_back(head_ref_1, tmp);
	ft_second_last(*head_ref_2)->next = NULL;
	ft_printf("pa\n");
}
