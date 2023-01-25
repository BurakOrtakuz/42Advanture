/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:39:06 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/25 02:19:17 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
