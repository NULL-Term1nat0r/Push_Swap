/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:08:51 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/25 22:47:51 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./ft_printf/libft/libft.h"
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_lst
{
	int nbr;
	struct s_lst	*next;
}	t_lst;

// typedef struct s_stack
// {
// 	int size;
// 	struct s_lst *second_top;
// 	struct s_lst *top;
// 	struct s_lst *bottom;
// } t_stack;

// Hauptfunktion
//Hilfsfunktionen

//Link_List_Funtionen

t_lst *ft_push_front(t_lst **head_ref, int new_data);
int ft_count_stack(t_lst *head_ref);
t_lst *ft_second_last(t_lst *head_ref);
t_lst *ft_last(t_lst *head_ref);
void ft_add_back(t_lst **head_ref, t_lst *new_node);


#endif
