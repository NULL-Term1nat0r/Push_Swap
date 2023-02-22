/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:23:13 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/21 02:20:14 by estruckm         ###   ########.fr       */
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
