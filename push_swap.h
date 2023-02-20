/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:13:32 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/20 19:03:16 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_lst
{
	int				nbr;
	int				size_a;
	int				size_b;
	struct s_lst	*next;
	struct s_lst	*a;
	struct s_lst	*b;
}	t_lst;

void	ft_push_swap(char **argv, t_lst *stack);
int		ft_count_arg(char **argv);
int		ft_ps_atoi(char *argv, t_lst *stack);
void	ft_error(t_lst*stack);
void	ft_check_repeat(t_lst **stack);
void	ft_sort(t_lst **a, t_lst **b, t_lst *stack, int int_count);
void	ft_sort_tmp(int *tmp_stack, int int_count);
void	ft_sort_small_a(t_lst **a, t_lst **b, int int_count, t_lst *stack);
void	ft_sort_small_b(t_lst **a, t_lst **b, int int_count, t_lst *stack);
int		ft_check_sort(t_lst **head, int size, int order);
void	ft_sa(t_lst **s);
void	ft_sb(t_lst **s);
void	ft_sort_three_a(t_lst **s);
void	ft_rra(t_lst **head);
void	ft_rrb(t_lst **head);
void	ft_ra(t_lst **head);
void	ft_rb(t_lst **head);
void	ft_pa(t_lst **a, t_lst **b, t_lst *stack);
void	ft_pb(t_lst **a, t_lst **b, t_lst *stack);
int		ft_get_mediane(int *pivot, int *stack, int int_count);
void	ft_sort_tmp(int *tmp_stack, int int_count);
int		ft_quicksort_a(t_lst **a, t_lst **b, t_lst *stack, int int_count, int rev);
int		ft_quicksort_b(t_lst **a, t_lst **b, t_lst *stack, int int_count, int rev);
int		ft_push(t_lst *stack, int int_count, int buf);
int		ft_return(t_lst *stack, int items);
int		ft_empty_b(t_lst*stack, int int_count);

int		ft_count_stack(t_lst *head_ref);
int		ft_push_front(t_lst **stack, int new_data);
void	ft_free_list(t_lst **head_ref);
int		ft_get_pivot_element(t_lst **head, int *pivot);
t_lst	*ft_last(t_lst *head_ref);
t_lst	*ft_second_last(t_lst *head_ref);


#endif
