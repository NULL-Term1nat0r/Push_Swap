/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:26:43 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/23 22:33:25 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <xlocale.h>

int main (int nbr_arg, char **arg)
{
	int nbr[nbr_arg - 1];

	int i;
	int j;
	p_list **a;
	p_list **b;
	p_list *c;

	i = 0;
	j = 0;
	a = (p_list**)malloc(sizeof(p_list));
	b = (p_list**)malloc(sizeof(p_list));

	while (arg[i + 1] != 0)
	{
		nbr[i] = atoi(arg[i + 1]);
		printf("%d\n", nbr[i]);
		i++;
	}
	while (j < nbr_arg - 1)
		ft_push_front(a, nbr[j++]);
	c = *a;
	while (c)
	{
		printf("%d ", c->nbr);
		c = c->next;
	}
	p_list->next->next

	return 0;
}

// struct Node {
//     int data;
//     struct Node* next;
// };

// void changeNodeContent(struct Node* node, int newData) {
//     node->data = newData;
// }

// int main() {
//     struct Node* head = (struct Node*)malloc(sizeof(struct Node));
//     head->data = 1;
//     head->next = NULL;

//     changeNodeContent(head, 5);
//     printf("Node data: %d\n", head->data); // prints "Node data: 5"
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* next;
// };

// int main() {
//     struct node* head = NULL;
//     struct node* second = NULL;
//     struct node* third = NULL;
//     struct node* fourth = NULL;
//     struct node* fifth = NULL;

//     // allocate 5 nodes in the heap
//     head = (struct node*)malloc(sizeof(struct node));
//     second = (struct node*)malloc(sizeof(struct node));
//     third = (struct node*)malloc(sizeof(struct node));
//     fourth = (struct node*)malloc(sizeof(struct node));
//     fifth = (struct node*)malloc(sizeof(struct node));

//     // put data in the first node
//     head->data = 1;
//     head->next = second;

//     // put data in the second node
//     second->data = 2;
//     second->next = third;

//     // put data in the third node
//     third->data = 3;
//     third->next = fourth;

//     // put data in the fourth node
//     fourth->data = 4;
//     fourth->next = fifth;

//     // put data in the fifth node
//     fifth->data = 5;
//     fifth->next = NULL;

//     // print the data in each node
//     struct node* current = head;
//     while (current != NULL) {
//         printf("%d\n", current->data);
//         current = current->next;
//     }

//     return 0;
// }
