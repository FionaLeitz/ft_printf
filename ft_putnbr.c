/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:23:04 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/10 16:01:05 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_recursive_putnbr(long long n)
{
	ssize_t	rest;

	rest = n % 10 + '0';
	n = n / 10;
	if (n > 0)
		ft_recursive_putnbr(n);
	write(1, &rest, 1);
	return ;
}

void	ft_putnbr(long long n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 1);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	ft_recursive_putnbr(n);
	return ;
}
