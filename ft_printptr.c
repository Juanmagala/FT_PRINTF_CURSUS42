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
/*   Created: 2024/02/05 12:25:54 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/05 12:25:54 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	unsigned long	address;
	int				count;

	count = 2;
	address = (unsigned long)ptr;
	ft_putstr_fd("0x", 1);
	count += ft_printex("x", address);
	return (count);
}
