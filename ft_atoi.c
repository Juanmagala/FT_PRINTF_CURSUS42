/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:55:16 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/05 12:35:41 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_ispositive(const char *str, int *i);
void	ft_spaces(const char *str, int *i);

void	ft_spaces(const char *str, int *i)
{
	while (str[*i] == ' ' || str[*i] == '\f' || str[*i] == '\n'
		|| str[*i] == '\r' || str[*i] == '\t' || str[*i] == '\v')
	{
		(*i)++;
	}
}

int	ft_ispositive(const char *str, int *i)
{
	int	count;

	count = 1;
	if (str[*i] == '-')
		count = count * -1;
	(*i)++;
	if (count < 0)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	resul;
	int	positive;

	i = 0;
	resul = 0;
	positive = 1;
	ft_spaces(str, &i);
	if (str[i] == '+' || str[i] == '-')
		positive = ft_ispositive(str, &i);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			resul = (resul * 10) + (str[i] - '0');
		else
		{
			if (positive == 0)
				return (resul *= -1);
			return (resul);
		}
		i++;
	}
	if (positive == 0)
		return (resul *= -1);
	return (resul);
}
