/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:27:06 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/03 22:31:43 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_pb(t_lst **head_ref_1, t_lst **head_ref_2)
{
	t_lst	*tmp;

	tmp = ft_last(*head_ref_1);
	ft_add_back(head_ref_2, tmp);
	ft_second_last(*head_ref_1)->next = NULL;
	// ft_free_node(head_ref_1, tmp);
	ft_printf("pb\n");
}
