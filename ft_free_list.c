/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:19:16 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/05 23:41:47 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free_list(t_lst **head_ref)
{
  t_lst *temp;
  while ((*head_ref) != NULL)
  {
	temp = (*head_ref);
	(*head_ref) = (*head_ref)->next;
	free(temp);
  }
}
