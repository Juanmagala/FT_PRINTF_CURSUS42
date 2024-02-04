/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:08:03 by jgalarce          #+#    #+#             */
/*   Updated: 2023/12/13 13:00:47 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	resul;
	size_t	tamdest;

	tamdest = ft_strlen(dest);
	resul = tamdest + ft_strlen(src);
	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	if (size < tamdest)
		return (ft_strlen(src) + size);
	return (resul);
}
