/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:52:22 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/06 18:37:44 by jgalarce         ###   ########.fr       */
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
		count += ft_printstring(va_arg(args, char *));
	else if (*s == 'd' || *s == 'i')
		count += ft_printnumber(args);
	else if (*s == 'u')
		count += ft_printunsigned(va_arg(args, unsigned int));
	else if (*s == 'x' || *s == 'X')
		count += ft_printhex(s, va_arg(args, int));
	else if (*s == 'p')
		count += ft_printptr(va_arg(args, void *));
	else if (*s == '%')
	{
		ft_printchar('%');
		(count)++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (write(1, "", 0) == -1)
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
			ft_printchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

/* int	main(void)
{
	char *str = "hola como estas";

	printf("   %i  \n",ft_printf("%p", str));
	printf("   %i   \n",printf("%p", str));
	return (0);
} */