/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:15:32 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/25 15:03:18 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	char *a = "1234 5678 6789 0678 9067 890";
	char *b ="asdfghjksdfghjk";
	char c[50]="";

	int i = 0;
	while(i< 6)
	{
		printf("%s|||\n",ft_split(a,' ')[i]);		
		i++;
	}

}
 