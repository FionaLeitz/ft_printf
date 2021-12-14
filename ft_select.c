/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:10:10 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/14 09:50:18 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_select(char c, va_list arguments)
{
	int	result;

	result = 0;
	if (c == 'c')
	{
		ft_putchar((int) va_arg(arguments, int));
		result++;
	}
	if (c == 's')
		result += ft_putstr((char *) va_arg(arguments, char *));
		
	//if (c == 'p')
	//	;
	if (c == 'd')
		result += ft_putnbr(va_arg(arguments, int));
	if (c == 'i')
		result += ft_putnbr(va_arg(arguments, int));
	if (c == 'u')
		result += ft_putnbr_unsigned(va_arg(arguments, unsigned int));
//	if (c == 'x')
//		ft_putnbr_base(va_arg(arguments, (unsigned int)), "0123456789abcdef");
//	if (c == 'X')
//		ft_putnbr_base(va_arg(arguments, (unsigned int)), "0123456789ABCDEF");
	if (c == '%')
		{
		write(1, "%", 1);
		result++;
	}
	return (result);
}
