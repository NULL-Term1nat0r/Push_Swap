/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 22:25:48 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/06 22:51:43 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, const char *base, int nbr_base)
{
	int	i;

	i = 0;
	if (n >= (unsigned long)nbr_base)
	{
		ft_putnbr_base(n / nbr_base, base, nbr_base);
	}
	i = ft_numlen_base(n, 16);
	write(1, &base[n % nbr_base], 1);
	return (i);
}
