/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:18:27 by jgalarce          #+#    #+#             */
/*   Updated: 2023/12/07 14:43:59 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	const char	b = (char)c;

	ptr = 0;
	while (*s != '\0')
	{
		if (*s == b)
			ptr = s;
		s++;
	}
	if (b == '\0')
		ptr = s;
	return ((char *)ptr);
}
