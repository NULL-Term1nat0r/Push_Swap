/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:23:13 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/16 16:21:09 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_lst *stack)
{
	ft_free_list(&(stack->a));
	ft_free_list(&(stack->b));
	// free(stack);
	write(2, "Error\n", 6);
	exit(1);
}

//exit beendet das Programm und gibt den Wert 1 an das Betriebssystem zurück.
//Der Rückgabewert != 0 zeigt an, dass ein Fehler vorliegt.
