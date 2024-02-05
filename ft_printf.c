/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:52:22 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/05 14:57:28 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(const char *s, va_list args)
{
	int	count;

	count = 0;
	if (*s == 'c')
		count += ft_printchar(va_arg(args, int));
	else if (*s == 's')
		count += ft_printstring(args);
	else if (*s == 'd' || *s == 'i' || *s == 'u')
		count += ft_printnumber(s, args);
	else if (*s == 'x' || *s == 'X')
		count += ft_printex(s, va_arg(args, int));
	else if (*s == 'p')
		count += ft_printptr(va_arg(args, void *));
	else if (*s == '%')
	{
		ft_putchar_fd('%', 1);
		(count)++;
	}
	return (count);
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
		{
			format++;
			count += ft_print_format(format, args);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	printf("%i\n",ft_printf("%s", "hola"));
	printf("%i\n",printf("%s", "hola"));
	return (0);
}