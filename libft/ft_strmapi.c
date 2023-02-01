/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:29:40 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/25 18:38:40 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*data;

	i = 0;
	data = ft_calloc(ft_strlen(s), sizeof(char));
	while (s[i] != '\0')
	{
		data[i] = f(i, s[i]);
		i++;
	}
	return (data);
}
