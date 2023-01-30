/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:26:43 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/30 01:08:11 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <xlocale.h>

static int get_middle_element(t_lst **head_ref, int size)
{
	int i;

	int tmp;
	t_lst *head;

	i = 0;
	head = *head_ref;
	while (i <= size/2)
	{
		head = *head_ref;
		while (head->next != NULL)
		{
			if (head->nbr > head->next->nbr)
			{
				tmp = head->next->nbr;
				head->next->nbr = head->nbr;
				head->nbr = tmp;
			}
			if (i == size/2)
				return (head->nbr);
			head = head->next;
		}
		*head_ref = (*head_ref)->next;
		i++;
	}
	return 0;
}

static void get_arguments(t_lst **a, int nbr_arg, char **arg)
{
	int i;

	i = 0;
	while (arg[++i] != 0)
		ft_push_front(a, ft_atoi(arg[i]));
}

int main (int nbr_arg, char **arg)
{
	t_lst **a;
	t_lst **b;
	int size;
	a = (t_lst**)malloc(sizeof(t_lst));
	b = (t_lst**)malloc(sizeof(t_lst));
	size = 0;
	t_lst *c;

	get_arguments(a, nbr_arg, arg);
	c = *a;
	while (c)
	{
		printf("%d ", c->nbr);
		c = c->next;
	}

	// printf("\n%d", get_middle_element(a, nbr_arg - 1));

	ft_rra(a);
	c = *a;
	printf("\n");
	while (c)
	{
		printf("%d ", c->nbr);
		c = c->next;
	}

	return 0;
}
//https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
