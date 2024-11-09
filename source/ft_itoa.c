/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:06:36 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/05 20:06:38 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int countdigits(int n)
{
	int count;

	if (n  == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}

void itoipart2(char *str, int numdi, long n)
{
	str[numdi] = '\0';
	numdi--;
	while (numdi >= 0)
	{
		str[numdi] = n % 10 + 48;
		n =  n / 10;
		numdi--;
	}
} 

char *ft_itoa(int n)
{
	int numdi;
	char *str;
	long number;

	number = n;
	numdi = countdigits(number);	
	if (number < 0)
	{
		str = (char *)malloc(sizeof(char) * numdi + 1);
		number = -number;
		str[0] = '-';
	}
	else
		str = (char *)malloc(sizeof(char) * numdi + 1);
	itoipart2(str  + (n < 0), numdi - (n < 0), number);
	return (str);
}

// int main()
// {
// 	int n = 0; 
// 	char *number = ft_itoa(n);
// 	printf("string : \'%s\'\n", number);
// 	// free(number);
// 	return 0;
// }
