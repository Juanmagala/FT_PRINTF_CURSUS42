/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:37:41 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/02 19:38:43 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(va_list args, int *count)
{
	ft_putchar_fd(va_arg(args, int), 1);
	*count++;
	return (*count);
}