/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pivot_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:24:46 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/04 20:58:32 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_cpy_link_list(t_lst **head_ref, t_lst **c, int size)
{
	t_lst *tmp;

	tmp = *head_ref;
		while (size != 0)
		{
			ft_push_front(c, (*head_ref)->nbr);
			size--;
			(*head_ref) = (*head_ref)->next;
		}
	*head_ref = tmp;
}
static void ft_sort_link_list(t_lst **head_ref)
{
	int swap;
	t_lst *temp;
	t_lst *ptr1;
	t_lst *ptr2;

	temp = *head_ref;
	ptr1 = temp;

	while (temp != NULL)
	{
		ptr2 = temp->next;
		while (ptr2 != NULL)
		{
			 if (ptr1->nbr > ptr2->nbr)
			{
				swap = ptr1->nbr;
				ptr1->nbr = ptr2->nbr;
				ptr2->nbr = swap;
			 }
			ptr2 = ptr2->next;
		}
		temp = temp->next;
		ptr1 = temp;
	}
}
static int ft_get_middle_element(t_lst **head_ref)
{
	t_lst *slow;
	t_lst *fast;

	slow = *head_ref;
	fast = *head_ref;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->nbr;
}
int ft_get_pivot_element(t_lst **head_ref)
{
	t_lst **c;

	c = (t_lst**)malloc(sizeof(t_lst));
	ft_cpy_link_list(head_ref, c, ft_count_stack(*head_ref));
	ft_sort_link_list(c);
	return (ft_get_middle_element(c));
}
