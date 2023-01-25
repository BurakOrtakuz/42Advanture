/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:32:59 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/25 02:50:21 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;
	size_t	altsize;

	size = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[size] != '\0')
	{
		altsize = 0;
		while (haystack[size + altsize] == needle[0] && size + altsize < len)
		{
			if (haystack[size + altsize] == '\0' && needle[size + altsize])
			{
				return ((char *)&haystack[size]);
			}
			altsize++;
		}
		if (needle[altsize] == '\0')
			return ((char *)haystack + size);
		size++;
	}
	return (0);
}
