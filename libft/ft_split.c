/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:46:06 by bortakuz          #+#    #+#             */
/*   Updated: 2023/02/01 22:41:25 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

int	counter(const char *s, char c)
{
	int	a;
	int	count;

	count = 0;
	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			count++;
		a++;
	}
	return (count);
}

int	found_next(const char *s, char c)
{
	int	a;

	a = 0;
	while (s[a] != c && s[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*piece(const char *s, char c, int k)
{
	int		j;
	int		l;
	char	*trimmed_data;

	l = found_next(s + k, c);
	trimmed_data = (char *)malloc(l * sizeof(char));
	j = 0;
	while (j < l)
	{
		trimmed_data[j] = s[k];
		k++;
		j++;
	}
	return (trimmed_data);
}

char	**ft_split(char const *s, char c)
{
	char	**data;
	int		i;
	int		k;

	k = 0;
	i = 0;
	data = (char **)malloc((ft_strlen(s) - counter(s, c)) * sizeof(char *));
	while (i <= counter(s, c))
	{
		data[i] = piece(s, c, k);
		k += found_next(s + k, c) + 1;
		i++;
	}
	return (data);
}
