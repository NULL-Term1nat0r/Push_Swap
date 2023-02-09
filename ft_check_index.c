/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:21:57 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/09 01:05:31 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_index(t_lst **head_ref)
{
	t_lst	*tmp;
	int	count;
	int index;

	index = ft_last(*head_ref)->index;
	count = 0;
	tmp = *head_ref;
	while (tmp != NULL)
	{
		if (tmp->index == index)
			count++;
		tmp = tmp->next;
	}
	return (count);
}
