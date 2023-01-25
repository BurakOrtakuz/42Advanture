/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:15:32 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/25 11:59:15 by bortakuz         ###   ########.fr       */
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
	char *a = "       -  12a113as<dz";
	char *b ="asdfghjksdfghjk";
	char c[50]="";

	printf("%d %d\n",ft(a), atoi(a));
}
 