/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:52:22 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/02 19:52:24 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char *s, va_list args, int *count)
{
	s++;
	if (*s == 'c')
		*count = ft_printchar(args, count);
	else if (*s == 's')
		*count = ft_printstring(args, count);
	else if (*s == 'd' || *s == 'i')
		*count = ft_printnumber(s, args, count);
	else if (*s == 'u')
		*count = ft_printnumber(s, args, count);
	else if (*s == 'x' || *s == 'X')
	{
		int num = va_arg(args, int);
		*count += ft_printexa(s, num);
	}
	else if (*s == '%')
	{
		ft_putchar_fd('%', 1);
		*count++;
	}
	else
		return (-1);
	return (*count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (write(1, "", 1) == -1)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += ft_print_format(format, args, &count);
		else
		{
			ft_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

int main()
{
	
}

/*str = ((char *)&args);*/