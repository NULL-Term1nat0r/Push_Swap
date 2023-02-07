/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:26:43 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/07 22:07:55 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void get_arguments(t_lst **a, int nbr_arg, char **arg)
{
	while (--nbr_arg != 0)
	{
		ft_push_front(a, ft_atoi(arg[nbr_arg]), -1);
	}
}

static void print_List(t_lst **head_ref)
{
	t_lst *tmp;

	tmp = *head_ref;
	while ((*head_ref) != NULL)
	{
		printf("%d (%d) ", (*head_ref)->nbr, (*head_ref)->index);
		*head_ref = (*head_ref)->next;
	}
	printf("\n");
	*head_ref = tmp;
	return;
}

int main (int nbr_arg, char **arg)
{
	t_lst *a;
	t_lst *b;
	stack size_A;
	stack size_B;
	int middle_element;
	b = NULL;
	// a = (t_lst**)malloc(sizeof(t_lst));
	// b = (t_lst**)malloc(sizeof(t_lst));
	size_A.size = nbr_arg - 1;
	get_arguments(&a, nbr_arg, arg);
	size_B.size = nbr_arg - size_A.size;
	// printf("%d\n", nbr_arg);
	// printf("%d\n", size_A.size);
	// ft_sort_stack_main(a, b);
	print_List(&a);
	//printf("%d",ft_get_pivot_element(&a, 1));
	ft_sort_stack_main(&a, &b);
	print_List(&a);
	print_List(&b);

	// print_List(&a);
	// ft_sort_stack_chunk(a, b, size_A.size, middle_element);
	// print_List(a);

	// ft_sort_stack(a, b, size_A, size_B);
	return 0;
}
//https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
