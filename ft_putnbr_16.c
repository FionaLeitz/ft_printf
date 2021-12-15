/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <fleitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:35:23 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/15 17:35:46 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_16(uintptr_t n, char c)
{
    char    *base;
    int     i;
    int     result;

    result = 1;
    if (c == 'X')
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";
    i = n % 16;
    n = n / 16;
    if (n != 0)
        result += ft_putnbr_16(n, c);
    write(1, &base[i], 1);
    return (result);
}
