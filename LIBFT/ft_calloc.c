/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/12/07 14:03:51 by jgalarce          #+#    #+#             */
/*   Updated: 2023/12/07 14:03:51 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*memory_block;

	memory_block = malloc(count * size);
	if (memory_block == NULL)
		return (NULL);
	ft_bzero(memory_block, count * size);
	return (memory_block);
}
