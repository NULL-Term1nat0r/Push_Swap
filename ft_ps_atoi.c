/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:18:45 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/16 18:31:53 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ps_atoi(char *argv, t_lst *stack)
{
	int				sign;
	unsigned long	ret;

	ret = 0;
	sign = 1;
	while (*argv == 32 || (*argv >= 9 && *argv <= 13))
		argv++;
	if (*argv == 45)
		sign = -1;
	if (*argv == 45 || *argv == 43)
		argv++;
	while (*argv)
	{
		if (*argv < 48 || *argv > 57)
			ft_error(stack);
		ret = (ret * 10) + (*argv++ - 48);
	}
	if ((ret > 2147483648 && sign == -1) || (ret > 2147483647 && sign == 1))
		ft_error(stack);
	return (ret * sign);
}
