/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <fleitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:10:10 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/15 17:35:57 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_select(char c, va_list arguments)
{
	int	result;

	result = 1;
	if (c == 'c')
		result = ft_putchar((int) va_arg(arguments, int));
	else if (c == 's')
		result = ft_putstr((char *) va_arg(arguments, char *));
	else if (c == 'p')
		result = ft_putnbr_16(va_arg(arguments, uintptr_t), c);
	else if (c == 'd')
		result = ft_putnbr(va_arg(arguments, int));
	else if (c == 'i')
		result = ft_putnbr(va_arg(arguments, int));
	else if (c == 'u')
		result = ft_putnbr_unsigned(va_arg(arguments, unsigned int));
//	else if (c == 'x' || c == 'X')
//		result = ft_putnbr_16(va_arg(arguments, unsigned int), c);
	else
		write(1, &c, 1);
	return (result);
}