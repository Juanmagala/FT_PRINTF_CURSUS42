/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:37:44 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/06 18:12:30 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(int n, int *count)
{
	char	number;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count = 11;
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = n * (-1);
			(*count)++;
		}
		if (n >= 10)
			ft_putnbr(n / 10, count);
		number = '0' + (n % 10);
		write(1, &number, 1);
		(*count)++;
	}
	return (*count);
}

int	ft_printnumber(va_list args)
{
	int	num;
	int	count;

	count = 0;
	num = va_arg(args, int);
	if (num == 0)
	{
		write(1, "0", 1);
		count++;
	}
	else
		ft_putnbr(num, &count);
	return (count);
}
