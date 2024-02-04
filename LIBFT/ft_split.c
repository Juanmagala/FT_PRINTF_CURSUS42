/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:49:44 by jgalarce          #+#    #+#             */
/*   Updated: 2024/01/23 20:49:44 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s1, char set)
{
	int	count;

	if (!s1)
		return (0);
	count = 0;
	while (*s1)
	{
		if (*s1 != set)
		{
			count++;
			while (*s1 != 0 && *s1 != set)
				s1++;
		}
		else
			s1++;
	}
	return (count);
}

static void	ft_freematrix(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		start;
	int		i;
	int		j;

	i = 0;
	j = 0;
	start = -1;
	array = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (array == 0 || !s)
		return (free(array), NULL);
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && start != -1)
		{
			array[j] = ft_substr(s, start, (i - start));
			if (array[j++] == 0)
				return (ft_freematrix(array), NULL);
			start = -1;
		}
		i++;
	}
	return (array[j] = 0, array);
}
