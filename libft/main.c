/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:15:32 by bortakuz          #+#    #+#             */
/*   Updated: 2023/01/24 19:12:13 by bortakuz         ###   ########.fr       */
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
	printf("%zu\n",ft_strlen(b));
	printf("%zu %zu\n%s|%s", ft_strlcat(b,a,10),strlcat(c,a,10),b,c);
}
