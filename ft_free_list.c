/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:19:16 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/21 02:18:34 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_list(t_lst **head_ref)
{
	t_lst	*temp;

	while ((*head_ref) != NULL)
	{
		temp = (*head_ref);
		(*head_ref) = (*head_ref)->next;
		free(temp);
	}
}
