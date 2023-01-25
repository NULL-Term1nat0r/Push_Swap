/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:26:47 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/25 18:44:29 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst *ft_second_last(t_lst *head_ref)
{
	t_lst *current;
	t_lst *prev;

	current = head_ref;
	prev = NULL;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}

	return (prev);
}
// void showSecondLast(struct Node* head) {
//     struct Node* prev = NULL;
//     struct Node* curr = head;

//     while (curr->next != NULL) {
//         prev = curr;
//         curr = curr->next;
//     }
