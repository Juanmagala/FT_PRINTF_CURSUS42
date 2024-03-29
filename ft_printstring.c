/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:37:39 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/06 18:01:35 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstring(char *args)
{
	int		count;

	count = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count += ft_strlen(args);
	while (*args != '\0')
	{
		write(1, args, 1);
		args++;
	}
	return (count);
}
