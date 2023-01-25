/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:27:06 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/25 23:16:15 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_b(t_lst **head_ref_1, t_lst **head_ref_2)
{
	t_lst	*tmp_1;
	t_lst	*tmp_2;
	tmp_1 = (t_lst *)malloc(sizeof(t_lst));
	if (!tmp_1)
		return NULL;
	tmp_2 = (t_lst *)malloc(sizeof(t_lst));
	if (!tmp_2)
		return NULL;
	tmp_1 = ft_last(*head_ref_1);
	ft_add_back(head_ref_2, tmp_1);
	tmp_2 = ft_second_last(*head_ref_1);
	tmp_2-> next = NULL;



}
