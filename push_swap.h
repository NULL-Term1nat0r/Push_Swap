/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:08:51 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/22 23:20:55 by estruckm         ###   ########.fr       */
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
}	p_list;

// Hauptfunktion

//Hilfsfunktionen

//Link_List_Funtionen

p_list	*ft_element_new(int nbr, p_list *a);

#endif
