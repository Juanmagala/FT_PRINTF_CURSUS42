/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgalarce <jgalarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:23:17 by jgalarce          #+#    #+#             */
/*   Updated: 2024/02/06 18:37:57 by jgalarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_printchar(int args);
int		ft_printstring(char *args);
int		ft_printnumber(va_list args);
int		ft_printunsigned(unsigned int num);
int		ft_printhex(const char *s, unsigned int num);
int		ft_printptr(void *ptr);
int		ft_printf(char const *format, ...);

#endif