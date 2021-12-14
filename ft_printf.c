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
	int	result;
	va_list arguments;

	va_start(arguments, str);
	count = 0;
	result = 0;
	while (str[count])
	{
		while (str[count] != '%' && str[count])
		{
			write(1, &str[count], 1);
			result++;
			count++;
		}
		if (str[count])
		{
			result = result + ft_select(str[count + 1], arguments);
			count += 2;
		}
	}
	va_end(arguments);
	return (result);
}
