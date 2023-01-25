/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:21:17 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/25 12:30:27 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*data;
	int		i;
	int		j;
	int		k;
	int		l;

	l = 0;
	k = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	data = (char *)ft_calloc(sizeof(char), i + j);
	while (k + l < i + j)
	{
		if (k < i)
		{
			data[k] = s1[k];
			k++;
		}
		else if (l < j)
		{
			data[k] = s2[l];
			l++;
		}
	}
	return (data);
}
