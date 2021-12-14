/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:49:49 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/14 09:50:39 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	int	count;

	count = 0;
	while (str[count])
	{
		while (str[count] != "%" && str[count])
		{
			write(1, &str[count], 1);
			count++;
		}
		if (str[count])
			count = count + ft_select(str[count + 1], );

	}
	return (count);
}
