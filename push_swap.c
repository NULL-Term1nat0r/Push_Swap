/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:31:55 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/20 21:50:00 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void get_arguments(t_lst *stack, int nbr_arg, char **arg)
{
	nbr_arg -= 1;
	stack->a = NULL;
	while (nbr_arg >= 0)
	{
		ft_push_front(&stack->a, ft_ps_atoi(arg[nbr_arg], stack));
		nbr_arg--;
	}
}

static void print_List(t_lst **head)
{
	t_lst *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		printf("%d ", tmp->nbr);
		tmp = tmp->next;
	}
	printf("\n");
}

void	ft_push_swap_2(char **argv, t_lst *stack)
{
	int int_arg;

	int_arg = ft_count_arg(argv);
	get_arguments(stack, int_arg, argv);
	stack->size_a = int_arg;
	stack->size_b = 0;
	ft_check_repeat(&stack->a);
	ft_sort(&stack->a, &stack->b, stack, int_arg);
}

int	main(int argc, char **argv)
{
	t_lst	*stack;


	stack = malloc(sizeof(t_lst));
	if (!stack)
		return (0);
	if (argc >= 2)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');
		ft_push_swap_2(argv, stack);
	}
	// print_List(&stack->a);
	free(stack);

	return (0);
}
