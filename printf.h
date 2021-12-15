/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <fleitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:56:07 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/15 17:35:48 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	    ft_printf(const char *str, ...);
int	    ft_select(char c, va_list arguments);
int     ft_putchar(int c);
int     ft_putstr(char *str);
int 	ft_putnbr(int n);
int     ft_putnbr_unsigned(unsigned int n);
int	    ft_putnbr_16(unsigned int n, char c);
int	    ft_putptr(uintptr_t n);
size_t	ft_strlen(char *str);

#endif
