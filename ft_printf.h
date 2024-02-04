/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:23:17 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/02 19:39:17 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "LIBFT/libft.h"

int	ft_printf(char const *s, ...);
int	ft_printchar(va_list args, int *count);
int	ft_printstring(va_list args, int *count);
int	ft_printnumber(char *s, va_list args, int *count);

#endif