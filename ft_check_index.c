/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:21:57 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/07 19:23:17 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_index_check(t_lst **head_ref, int index)
{
	t_lst	*tmp;
	int	count;

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
