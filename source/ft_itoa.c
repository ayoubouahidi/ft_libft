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

int countdigits(int n)
{
	int count;

	if (n  == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}

char *ft_itoa(int n)
{
	int numdi;
	char *str;

	numdi = countdigits(n);
	if (n  == 0)
		return (48);
	if (n < 0)
		str = (char *)malloc(sizeof(char) * numdi + 2);
	else
		str = (char *)malloc(sizeof(char) * numdi + 1);
	str[numdi] = '\0';
	while (numdi != 0)
	{
		str[numdi - 1] = n % 10 + 48;
		n =  n / 10;
		numdi--;
	}
	printf("%d\n", countdigits(n));
	return (str);
}

int main()
{
	int n = 1337; 
	printf("string : %s\n", ft_itoa(n));
	return 0;
}