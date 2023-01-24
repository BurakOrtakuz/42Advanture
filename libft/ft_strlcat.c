/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:07:14 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/24 19:17:37 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	size;
	int		dst_size;

	size = 0;
	dst_size = ft_strlen(dst);
	while (src[size] != '\0' && size < dstsize - 1)
	{
		dst[size + dst_size] = src[size];
		size++;
	}
	dst[size + dst_size] = '\0';
	return (ft_strlen(src));
}
