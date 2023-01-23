/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:08:51 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/23 23:11:23 by estruckm         ###   ########.fr       */
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

typedef struct p_list
{
	int nbr;
	struct p_list	*next;
	struct p_list	*last;
}	p_list;

typedef struct p_stack
{
	int size;
	struct p_list *top;
	struct p_list *bottom;
} p_stack;

// Hauptfunktion

//Hilfsfunktionen

//Link_List_Funtionen

p_list *ft_push_front(p_list **head_ref, int new_data);

#endif
