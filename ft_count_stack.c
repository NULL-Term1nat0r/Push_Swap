/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:09:53 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/25 18:19:58 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_count_stack(t_lst *head_ref)
{
	int i;

	i = 0;
	while (head_ref != NULL)
	{
		i++;
		head_ref = head_ref->next;
	}
	return (i);
}
