/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:15:32 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/24 21:42:26 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char *a = "asdfghjklasdfghjk";
	char b[50] ="";
	char c[50]="";
	printf("%s %s\n",ft_strchr(a,'h'), strchr(a,'h'));
}
 