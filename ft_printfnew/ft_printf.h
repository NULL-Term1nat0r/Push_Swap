/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:08:51 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/07 14:29:09 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

// Hauptfunktion

int		ft_printf(const char *s, ...);

//Hilfsfunktionen
int		ft_putchar(char c);
int		ft_putnbr_fd_return(int n, int fd);
int		ft_flagcheck(const char s, va_list arguments);
int		ft_putstr(char *s);
int		ft_putnbr_base(long int n, const char *base, int nbr_base);
int		ft_puthex(unsigned long n, const char *base, int nbr_base);
int		ft_putpointer(unsigned long n);
size_t	ft_numlen_base(unsigned long long int n, size_t base);
//size_t	ft_strlen(const char *s);

#endif
