/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:15:32 by bortakuz          #+#    #+#             */
/*   Updated: 2022/12/19 01:48:57 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	a[]="1234567890";
	char	b[10];
	char	c[]= "1234567890";
	char	d[10];
	ft_memcpy(b,a,8);
	memcpy(d,c,8);
	//a = "abcnkbj./ ,İ;hgıf  oasdfgkelş";
	printf("Birinci:%s|\nIkinci :%s|\n",b,d );
}
