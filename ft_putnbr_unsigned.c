/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <fleitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:23:27 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/15 17:35:53 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	rest;
	int				result;

	result = 1;
	rest = n % 10 + '0';
	n = n / 10;
	if (n > 0)
		result += ft_putnbr_unsigned(n);
	write(1, &rest, 1);
	return (result);
}
