/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:08:51 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/04 23:43:01 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "./ft_printf/libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>
#include <xlocale.h>

typedef struct s_lst
{
	int nbr;
	struct s_lst	*next;
}	t_lst;

//Link_List_functions

t_lst *ft_push_front(t_lst **head_ref, int new_data);
int ft_count_stack(t_lst *head_ref);
t_lst *ft_second_last(t_lst *head_ref);
t_lst *ft_last(t_lst *head_ref);
void ft_add_back(t_lst **head_ref, t_lst *new_node);
void ft_free_node(t_lst **headref, t_lst *node);
int ft_get_pivot_element(t_lst **head_ref);

//Actions

void ft_pb(t_lst **head_ref_1, t_lst **head_ref_2);
void ft_pa(t_lst **head_ref_1, t_lst **head_ref_2);
void ft_sa(t_lst **head_ref);
void ft_ss(t_lst **head_ref_1, t_lst **head_ref_2);
void ft_ra(t_lst **head_ref);
void ft_rb(t_lst **head_ref);
void ft_rra(t_lst **head_ref);
void ft_rrb(t_lst **head_ref);
void ft_rrr(t_lst **head_ref_1, t_lst **head_ref_2);

//sorting function
int ft_sort_stack_main(t_lst **stack_A, t_lst **stack_B);
#endif
