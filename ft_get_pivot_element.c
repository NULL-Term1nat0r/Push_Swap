/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pivot_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:24:46 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/06 00:05:10 by estruckm         ###   ########.fr       */
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

	printf("Beforey\n");
	tmp = *head_ref;
	printf("%p\n", tmp);
		while (tmp != NULL)
		{
			ft_push_front(c, (tmp)->nbr);
			printf("%p\n", tmp);
			(tmp) = (tmp)->next;
			// printf("%p\n", tmp);

		}
		printf("still here");
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
	printf("%p AFTER\n", c);
	int middle_element;
	printf("test1\n");
	c = (t_lst**)malloc(sizeof(t_lst**));
	printf("%p\n", *c);
	*c = NULL;
	printf("test2\n");
	ft_cpy_link_list(head_ref, c);
	print_List(c);
	printf("test3\n");
	ft_sort_link_list(c);
	printf("test4\n");
	middle_element = ft_get_middle_element(c);
	printf("test5\n");
	ft_free_list(c);
	printf("test6\n");
	printf("%p BEFORE\n", c);
	// free(c);
	return (middle_element);
}
