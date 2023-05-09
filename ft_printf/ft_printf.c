/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:23:45 by bortakuz          #+#    #+#             */
/*   Updated: 2023/05/09 14:45:18 by bortakuz         ###   ########.fr       */
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

char	*put_variable(va_list	variable, char flag)
{
	char	*changed_variable;

	if (flag == 'c')
		changed_variable = "char";
	else if (flag == 's')
		changed_variable = "string";
	else if (flag == 'p')
		changed_variable = "pointer";
	else if (flag == 'd')
		changed_variable = "decimal";
	else if (flag == 'i')
		changed_variable = "integer";
	else if (flag == 'u')
		changed_variable = "unsigned decimal";
	else if (flag == 'x')
		changed_variable = "hexadecimal lowercase";
	else if (flag == 'X')
		changed_variable = "hexadecimal uppercase";
	else if (flag == '%')
		changed_variable = "%";
	return (changed_variable);
}

char	*changer(const char *string, int i, va_list list)
{
	char	*flag;
	size_t	j;
	char	*variable;

	j = 0;
	flag = ft_substr(string, i, found_conversitions(string, i));
	while (flag[j + 1] != '\0')
		j++;
	variable = put_variable(list, flag[j]);
	return (variable);
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
			ft_putstr(changer(string, i, &args[j]));
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