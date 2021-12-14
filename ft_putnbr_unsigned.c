/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:23:27 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/14 16:23:31 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	rest;

	rest = n % 10 + '0';
	n = n / 10;
	if (n > 0)
		ft_putnbr_unsigned(n);
	write(1, &rest, 1);
	return ;
}
