/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:37:39 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/05 14:31:58 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstring(va_list args)
{
	char	*str;
	int		count;

	count = 0;
	str = va_arg(args, char *);
	count += ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}