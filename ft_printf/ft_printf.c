/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:23:45 by bortakuz          #+#    #+#             */
/*   Updated: 2023/05/10 00:56:17 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	found_conversitions(const char *string,	size_t len)
{
	size_t	i;

	i = 1;
	while (1)
	{
		if (check_conversitions(string, len + i) == 1)
		{
			return (i + 1);
		}
		else if (string[len + i] == ' ')
		{
			return (i);
		}
		else
			i++;
	}
	return (0);
}

size_t	check_conversitions(const char	*string, size_t len)
{
	char	list_of_conversition[9];
	size_t	i;

	list_of_conversition[0] = 'c';
	list_of_conversition[1] = 's';
	list_of_conversition[2] = 'p';
	list_of_conversition[3] = 'd';
	list_of_conversition[4] = 'i';
	list_of_conversition[5] = 'u';
	list_of_conversition[6] = 'x';
	list_of_conversition[7] = 'X';
	list_of_conversition[8] = '%';
	i = 0;
	while (i < 9)
	{
		if (string[len] == list_of_conversition[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	put_variable(va_list	variables, char flag)
{
	if (flag == 'c')
		ft_putchar(va_arg(variables, int));
	else if (flag == 's')
		ft_putstr(va_arg(variables, char *));
	else if (flag == 'p')
		ft_putstr("pointer");
	else if (flag == 'd')
		ft_unsigned(va_arg(variables, unsigned int));
	else if (flag == 'i')
		ft_putnbr(va_arg(variables, int));
	else if (flag == 'u')
		ft_unsigned(va_arg(variables, unsigned int));
	else if (flag == 'x')
		ft_putstr("hexadecimal lowercase");
	else if (flag == 'X')
		ft_putstr("hexadecimal uppercase");
	else if (flag == '%')
		ft_putstr("%");
}

void	changer(const char *string, int i, va_list list)
{
	char	*flag;
	size_t	j;

	j = 0;
	flag = ft_substr(string, i, found_conversitions(string, i));
	while (flag[j + 1] != '\0')
		j++;
	put_variable(list, flag[j]);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			changer(string, i, args);
			i++;
			j++;
		}
		else
			write(0, &string[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
