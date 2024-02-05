/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:25:14 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/05 12:25:14 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printex(const char *s, int num)
{
	char	*str;
	int		count;

	count = 0;
	if (*s == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	if (num < 0)
		num = num * (-1);
	if (num >= 0 && num <= 15)
	{
		ft_putchar_fd(str[num], 1);
		count++;
	}
	else
	{
		count += ft_printex(s, num / 16);
		ft_putchar_fd(str[num % 16], 1);
		count++;
	}
	return (count);
}