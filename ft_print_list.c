/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:24:22 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/21 04:28:40 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list(t_lst **head)
{
	t_lst	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		printf("%d ", tmp->nbr);
		tmp = tmp->next;
	}
	printf("\n");
}
