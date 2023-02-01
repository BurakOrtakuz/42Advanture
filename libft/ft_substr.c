/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:50:35 by bortakuz          #+#    #+#             */
/*   Updated: 2023/02/01 22:40:13 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	int		k;
	char	*data;

	data = (char *)ft_calloc(sizeof(char), len);
	i = 0;
	while (s[i] != (char)start)
		i++;
	j = i + (int)len;
	k = 0;
	while (i < j)
	{
		data[k] = s[i];
		i++;
		k++;
	}
	return (data);
}
