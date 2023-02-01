/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:51:28 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/25 18:26:56 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

int	digit(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*data;
	int		i;

	i = digit(n) - 1;
	data = (char *)malloc(digit(n) * sizeof(char));
	while (i >= 0)
	{
		data[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
	return (data);
}
