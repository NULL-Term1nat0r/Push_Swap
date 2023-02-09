/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pivot_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:24:46 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/09 01:13:40 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static void print_List(t_lst **head_ref)
{
	t_lst *tmp;

	tmp = *head_ref;
	while ((*head_ref) != NULL)
	{
		printf("%d ", (*head_ref)->nbr);
		*head_ref = (*head_ref)->next;
	}
	printf("\n");
	*head_ref = tmp;
	return;
}
static void ft_cpy_link_list(t_lst **head_ref, t_lst **c)
{
	t_lst *tmp;
	int index;

	index = ft_last(*head_ref)->index;

	tmp = *head_ref;
		while (tmp != NULL && tmp->index == index)
		{
			ft_push_front(c, (tmp)->nbr, (tmp)->index);
			(tmp) = (tmp)->next;
		}
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
	int count_stack;
	t_lst *tmp;

	tmp = *head_ref;
	count_stack = ft_count_stack(*head_ref) / 2;

	while (count_stack != 0)
	{
		tmp = tmp->next;
		count_stack--;
	}
	return (tmp->nbr);
}
int ft_get_pivot_element(t_lst **head_ref)
{
	t_lst *c;

	// c = (t_lst**)malloc(sizeof(t_lst**));
	c = NULL;
	ft_cpy_link_list(head_ref, &c);
	print_List(&c);
	ft_sort_link_list(&c);

	// ft_free_list(c);
	// free(c);
	printf("%d\n", ft_get_middle_element(&c));
	return (ft_get_middle_element(&c));
}
