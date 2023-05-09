/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_variable_changes.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:41:59 by bortakuz          #+#    #+#             */
/*   Updated: 2023/05/10 00:56:05 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putchar(char s)
{
	write(0, &s, 1);
}

void	ft_putnbr(int n)
{
	char	str[13];
	int		is_neg;
	int		length;

	is_neg = (n < 0);
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	else if (length > 0)
		length--;
	while (length >= 0)
		write(0, &str[length--], 1);
}

int	ft_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_unsigned(n / 10);
	write(1, &"0123456789"[n % 10], 1);
	return (len + 1);
}
