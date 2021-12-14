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

#include "libft.h"

int	ft_select(char c, va_list arguments)
{
	int	result;

	result = 0;
	if (c == "c")
	{
		ft_putchar(va_arg(arguments, char));
		result++;
	}
	if (c == "s")
	{
		ft_putstr(va_arg(arguments, char *));
		result = result + ft_strlen();
	}
	if (c == "p")
		;
	if (c == "d")
		;
	if (c == "i")
		ft_putnbr(va_arg(arguments, (long long)));
	if (c == "u")
		ft_putnbr(va_arg(arguments, (long long)));
	if (c == "x")
		ft_putnbr_base(va_arg(arguments, (unsigned int)), "0123456789abcdef");
	if (c == "X")
		ft_putnbr_base(va_arg(arguments, (unsigned int)), "0123456789ABCDEF");
	if (c == "%")
	{
		write(1, "%", 1);
		result++;
	}
	return (result);
}
