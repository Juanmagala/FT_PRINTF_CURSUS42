/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/02/06 17:02:03 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/06 17:02:03 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printptrhex(unsigned long num)
{
	char	*str;
	int		count;

	count = 0;
	str = "0123456789abcdef";
	if (num < 0)
		num = num * (-1);
	if (num >= 0 && num <= 15)
	{
		ft_printchar(str[num]);
		count++;
	}
	else
	{
		count += ft_printptrhex(num / 16);
		ft_printchar(str[num % 16]);
		count++;
	}
	return (count);
}

int	ft_printptr(void *ptr)
{
	unsigned long	address;
	int				count;

	count = 2;
	address = (unsigned long)ptr;
	if (!ptr)
	{
		write(1, "0x0", 3);
		return (3);
	}
	ft_printstring("0x");
	count += ft_printptrhex(address);
	return (count);
}
