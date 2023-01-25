/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:46:08 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/25 18:50:52 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst *ft_last(t_lst *head_ref)
{
	while (head_ref->next != NULL)
		head_ref = head_ref->next;
	return (head_ref);
}
