/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:42:05 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/06 16:10:35 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// p_list *ft_push_front(p_list **head_ref, int new_data)
// {
// 	p_list* new_node;
// 	new_node  = (p_list*)malloc(sizeof(p_list));
// 	new_node->nbr = new_data;
// 	new_node->next = (*head_ref);
// 	(*head_ref) = new_node;
// 	check_for_cases(head_ref, new_node);
// 	return (new_node);
// }

// static void	put_node_into_stack_top(p_stack *head_ref, p_list *new_node)
// {
// 	new_node->last = NULL;
// 	new_node->next = head_ref->top;
// 	if (head_ref->size == 0)
// 	{
// 		head_ref->bottom = new_node;
// 	}
// 	else
// 	{
// 		head_ref->top->last = new_node;
// 	}
// 	head_ref->top = new_node;
// }

t_lst *ft_push_front(t_lst **head_ref, int new_data, int index)
{
	t_lst	*new_node;

	new_node = (t_lst *)malloc(sizeof(t_lst));
	if (!new_node)
		return NULL;
	new_node->nbr = new_data;
	new_node->index = index;
	new_node->next = (*head_ref);
	*head_ref = new_node;
	return (new_node);
}

// };

// void addNodeToTop(struct Node** head, int data) {
//     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = *head;
//     newNode->prev = NULL;

//     // If the list is not empty, update the old head's prev pointer
//     if (*head != NULL) {
//         (*head)->prev = newNode;
//     }
//     *head = newNode;
// }
// chat gpt
// struct Node* second_to_last(struct Node* head) {
//     struct Node* current = head;
//     struct Node* prev = NULL;
//     while (current->next != NULL) {
//         prev = current;
//         current = current->next;
//     }
//     return prev;
// }

// adding an element to the list
// struct Node {
//     int element;
//     struct Node *next;
// };

// void push_front(struct Node **head, int element) {
//     struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
//     new_node->element = element;
//     new_node->next = *head;
//     *head = new_node;
// }
