/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:07:30 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 16:53:36 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(char **argv, t_lst *stack)
{
	int	int_arg;

	int_arg = ft_count_arg(argv);
	stack->size_a = int_arg;
	stack->size_b = 0;
	while (--int_arg >= 0)
	{
		if (!(ft_push_front(&stack->a, ft_ps_atoi(argv[int_arg], stack))))
		{
			ft_free_list(&stack->a);
			exit(1);
		}
	}
	ft_check_repeat(&stack->a);
	ft_sort(stack, stack->size_a);
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
		ft_push_swap(argv, stack);
	}
	free(stack);
	return (0);
}
//48 	ft_print_list(&stack->a);
// 30 	ft_print_list(&stack->a);
