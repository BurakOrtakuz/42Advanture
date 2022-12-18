/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:29:23 by bortakuz          #+#    #+#             */
/*   Updated: 2022/12/18 17:34:10 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isascii(int c)
{
	if (c >= 1 && c <= 127)
	{
		return (1);
	}
	return (0);
}