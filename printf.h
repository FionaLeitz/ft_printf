/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:56:07 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/10 10:08:39 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	    ft_printf(const char *str, ...);
int	    ft_select(char c, va_list arguments);
void    ft_putchar(int c);
int    	ft_putstr(char *str);
void	ft_putnbr(int n);
void    ft_putnbr_unsigned(unsigned int n);
size_t	ft_strlen(char *str);

#endif
