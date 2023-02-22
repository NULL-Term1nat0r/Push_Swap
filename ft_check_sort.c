/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:40:14 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/21 02:15:43 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sort(t_lst **head, int int_count, int direction)
{
	t_lst	*tmp;

	tmp = *head;
	if (int_count == 1)
		return (1);
	else if (direction == 0)
	{
		while (tmp->next != NULL)
		{
			if (tmp->nbr > tmp->next->nbr)
				return (0);
			tmp = tmp->next;
		}
		return (1);
	}
	else
	{
		while (tmp->next != NULL)
		{
			if (tmp->nbr < tmp->next->nbr)
				return (0);
			tmp = tmp->next;
		}
		return (1);
	}
}

//Prüft ob alle Zahlen auf dem übergebenen Stack
//aufsteigend (if) oder absteigend (else) sortiert sind.
//Übergibt dann 0.
//direction == 0 heißt es wird nach aufsteigender Ordnung gesucht,
//ansonsten nach absteigender Reihenfolge.
