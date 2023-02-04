/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arguements.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:16:51 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/04 20:19:26 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_cpy_link_list(t_lst **head_ref, size, char **arg, int size)
{
	while (--size != 0)
	{
		ft_push_front(a, ft_atoi(arg[size]));
		size++;
	}
	return (size);
}
