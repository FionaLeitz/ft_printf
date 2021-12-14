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

int	ft_select(char c, ...)
{
	int	count;

	if (c == "c")
	{
		ft_putchar(...);
		count++;
	}
	if (c == "s")
	{
		ft_putstr(...);
		count = count + ft_strlen();
	}
	if (c == "p")
		;
	if (c == "d")
		;
	if (c == "i")
		ft_putnbr(...);
	if (c == "u")
		;
	if (c == "x")
		ft_putnbr_base(..., "0123456789abcdef");
	if (c == "X")
		ft_putnbr_base(..., "0123456789ABCDEF");
	if (c == "%")
	{
		write(1, "%", 1);
		count++;
	}
	return (count);
}
