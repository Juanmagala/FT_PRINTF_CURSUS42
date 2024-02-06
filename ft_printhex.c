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

int	ft_printhex(const char *s, unsigned int num)
{
	char	*str;
	int		count;

	count = 0;
	if (*s == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	if (num < 16)
		count += ft_printchar(str[num]);
	else
	{
		count += ft_printhex(s, num / 16);
		count += ft_printchar(str[num % 16]);
	}
	return (count);
}
