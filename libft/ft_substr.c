/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:50:35 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/25 11:58:45 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*data;

	data = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (s[i] != start)
		i++;
	j = i + (unsigned int)len;
	while (i < j)
	{
		*data = s[i];
		i++;
		data++;
	}
	return (data);
}
