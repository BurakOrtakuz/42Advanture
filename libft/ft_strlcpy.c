/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:32:38 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/24 18:28:45 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	size;

	size = 0;
	while (src[size] != '\0' && size < dstsize - 1)
	{
		dst[size] = src[size];
		size++;
	}
	dst[size] = '\0';
	return (ft_strlen(src));
}
