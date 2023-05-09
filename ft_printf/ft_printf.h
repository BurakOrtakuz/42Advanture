/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:39:08 by bortakuz          #+#    #+#             */
/*   Updated: 2023/05/09 14:46:06 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdio.h"
# include "stdlib.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *string, ...);
char	*changer(const char *string, int i, va_list list);
size_t	check_conversitions(const char	*string, size_t len);
size_t	found_conversitions(const char *string,	size_t len);
char	*put_variable(va_list	variable, char flag);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
void	ft_putstr(char *s);

#endif