/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:02:48 by jgalarce          #+#    #+#             */
/*   Updated: 2024/01/23 17:40:03 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;

	if (dst == 0 && src == 0)
		return (0);
	str1 = dst;
	str2 = src;
	while (n > 0)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	return (dst);
}
