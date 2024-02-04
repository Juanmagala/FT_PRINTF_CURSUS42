/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:41:52 by jgalarce          #+#    #+#             */
/*   Updated: 2023/12/22 17:16:15 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j] && (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
