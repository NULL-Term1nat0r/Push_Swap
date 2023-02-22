/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:10:00 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/06 22:49:58 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int				i;
	unsigned char	c;

	i = 0;
	if (s == 0)
		return (write(1, "(null)", 6));
	while (*s != '\0')
	{
		c = *s;
		i += write(1, &c, 1);
		s++;
	}
	return (i);
}

// int main ()
// {
// 	char test[4] = "1234";
// 	printf("%s\n", test);
// }
