/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pivot_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:24:46 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/22 01:48:15 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_cpy_link_list(t_lst **head, t_lst **c, int int_count)
{
	t_lst	*tmp;

	tmp = *head;
	while (int_count != 0 && tmp != NULL )
	{
		if (ft_push_front(c, (tmp)->nbr) == 0)
			return (0);
		(tmp) = (tmp)->next;
		int_count--;
	}
	return (1);
}

static	void	ft_sort_link_list(t_lst **head_ref)
{
	int			swap;
	t_lst		*temp;
	t_lst		*ptr1;
	t_lst		*ptr2;

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

static	int	ft_get_middle_element(t_lst **head_ref)
{
	int		count_stack;
	t_lst	*tmp;

	tmp = *head_ref;
	count_stack = ft_count_stack(*head_ref) / 2;
	while (count_stack != 0)
	{
		tmp = tmp->next;
		count_stack--;
	}
	return (tmp->nbr);
}

int	ft_get_pivot_element(t_lst **head, int *pivot, int int_count)
{
	t_lst	*c;

	c = NULL;
	if (ft_cpy_link_list(head, &c, int_count) == 0)
		return (0);
	ft_sort_link_list(&c);
	*pivot = ft_get_middle_element(&c);
	return (1);
}
