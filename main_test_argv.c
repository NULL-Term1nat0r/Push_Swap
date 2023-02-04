/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:26:43 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/04 20:12:55 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_arguments(t_lst **a, int nbr_arg, char **arg, int size)
{
	while (--nbr_arg != 0)
	{
		ft_push_front(a, ft_atoi(arg[nbr_arg]));
		size++;
	}
	return (size);

}

int main (int nbr_arg, char **arg)
{
	t_lst **a;
	t_lst **b;
	int size_A;
	int size_B;
	t_lst *c;
	a = (t_lst**)malloc(sizeof(t_lst));
	b = (t_lst**)malloc(sizeof(t_lst));
	size_A = get_arguments(a, nbr_arg, arg, size_A);
	size_B = nbr_arg - size_A;

	printf("\n%d\n", ft_get_pivot_element(a));
	
	ft_sort_stack(a, b, size_A, size_B);
	// printf("\n%d", ft_get_pivot_element(a));
	c = *a;

	while (c)
	{
		printf("%d ", c->nbr);
		c = c->next;
	}
	printf("\n");
	c = *b;
while (c)
	{
		printf("%d ", c->nbr);
		c = c->next;
	}
	printf("\n%d\n", ft_get_pivot_element(a));


	return 0;
}
//https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
