/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:38:36 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 16:38:40 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_lst *stack)
{
	ft_free_list(&(stack->a));
	ft_free_list(&(stack->b));
	write(2, "Error\n", 6);
	exit(1);
}
