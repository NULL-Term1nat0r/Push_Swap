/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:49:44 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/06 22:38:23 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// Variadic function to add numbers
int	ft_printf(const char *s, ...)
{
	va_list			arguments;
	int				i;
	int				j;

	i = 0;
	j = 0;
	if (s[i] == '\0')
		return (0);
	va_start(arguments, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%' && ft_strchr("cspdiuxX%", s[i + 1]) != 0)
		{
			j += ft_flagcheck(s[i + 1], arguments);
			i++;
		}
		else
			j += ft_putchar(s[i]);
		i++;
	}
	va_end(arguments);
	return (j);
}

//quelle zur Aufsetzung und edge cases
// https://hector.dev.br/2021/09/15/ft-printf/
