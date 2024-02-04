/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:37:44 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/02 19:58:06 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnumber(char *s, va_list args, int *count)
{
	char	*str;
	int		num;

	num = va_arg(args, int);
	if (*s == 'u' && num < 0)
		num = num * (-1);
	str = ft_itoa(num);
	*count += ft_strlen(str);
	ft_putnbr_fd(num, 1);
	free(str);
	return (*count);
}