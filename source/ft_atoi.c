/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:05:14 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/22 22:22:02 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 int	fornotminette( int result, int cmpt, int cmpmoins)
{
	if (cmpt > 1)
		return (0);
	if (cmpmoins == 1)
		return (result * -1);
	return result;
}

int	ft_atoi(char *str)
{
	int	i;
	int	cmpt;
	int	result;
	int	cmpmoins;

	cmpmoins = 0;
	result = 0;
	cmpt = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32 && str[i] != '\0'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		cmpt++;
		if (str[i] == '-')
			cmpmoins++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	result = fornotminette(result, cmpt, cmpmoins);
	return (result);
}

// int main()
// {
// 	char *str = "   2002";
//   	printf("ayoub'sfunction output :   %d\n", ft_atoi(str));
// 	printf("the atoi function output : %d\n", atoi(str));
// }