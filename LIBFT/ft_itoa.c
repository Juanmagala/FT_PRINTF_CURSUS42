/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:54:00 by jgalarce          #+#    #+#             */
/*   Updated: 2024/01/23 20:54:00 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static int	ft_ispositive(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		length;
	int		sign;

	length = get_length(n);
	result = (char *)malloc((length + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[length--] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	sign = ft_ispositive(n);
	while (n != 0)
	{
		result[length--] = '0' + sign * (n % 10);
		n /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
