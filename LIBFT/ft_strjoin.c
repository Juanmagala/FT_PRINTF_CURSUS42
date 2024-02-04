/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:57:19 by jgalarce          #+#    #+#             */
/*   Updated: 2024/01/23 20:57:19 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strsubcat(char *s1, char *s2, size_t *pst);

static void	ft_strsubcat(char *s1, char *s2, size_t *pst)
{
	while (*s2 != '\0')
	{
		s1[*pst] = *s2;
		(*pst)++;
		s2++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;
	size_t	i;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(len + 1);
	i = 0;
	if (s3 == 0)
		return (0);
	ft_strsubcat(s3, (char *)s1, &i);
	ft_strsubcat(s3, (char *)s2, &i);
	s3[i] = '\0';
	return (s3);
}
