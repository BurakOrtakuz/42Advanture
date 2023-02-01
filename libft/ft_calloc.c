/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:24:37 by bortakuz          #+#    #+#             */
/*   Updated: 2023/02/01 22:36:38 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*area;
	size_t	i;

	i = 0;
	area = malloc(count * size);
	if (!area)
		return (0);
	while (i < count)
	{
		area[i] = '\0';
		i++;
	}
	return ((void *)area);
}
