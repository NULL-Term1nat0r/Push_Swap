/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:26:43 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/22 23:17:52 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <xlocale.h>

int main (int nbr_arg, char **arg)
{
	int nbr[nbr_arg - 1];
	p_list *a;

	int i;
	int j;

	i = 0;
	j = 0;
	a = (p_list*)malloc(sizeof(p_list));

	while (arg[i + 1] != 0)
	{
		nbr[i] = atoi(arg[i + 1]);
		printf("%d\n", nbr[i]);
		i++;
	}
	while (j < nbr_arg)
	{
		ft_element_new(nbr[j], a);
		j++;
	}
	printf("Node data: %d\n", a->nbr);

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


