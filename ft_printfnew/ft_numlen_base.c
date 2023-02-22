/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:04:02 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/07 14:14:26 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_numlen_base(unsigned long long n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long long)base)
	{
		n /= base;
		i++;
	}
	return (i);
}
