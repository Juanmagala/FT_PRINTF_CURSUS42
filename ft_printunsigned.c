/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:13:10 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/06 18:39:07 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned int n, int *count)
{
	char	number;

	if (n == 0)
	{
		write(1, "0", 1);
		*count = 1;
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

int	ft_printunsigned(unsigned int num)
{
	int	count;

	count = 0;
	ft_putnbr(num, &count);
	return (count);
}
