/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:11:53 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/03 10:11:56 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int countwords(char const *s, char c)
{
	size_t words;
	size_t i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break;
		words++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return words;
}
char *mallocword(char *s, char c)
{
	size_t count;
	size_t i;
	char *str;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while(s[i] != '\0' && s[i] != c)
		{
			i++;
			count++;
		}
	
	str = (char)malloc(sizeof(char) * count + 1);
	if(str == NULL)
		return NULL;
	return str;
}

char 	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;


	int	words;
	char	**str;

	words = countwords(s, c);
	str = (char **)malloc(sizeof(char *) * words + 1);
	i = 0;
	while (i < words)
	{
		j = 0;
		while (s[j] != '\0')
		{
			str[i] = mallocword(s + j, c);
			j++;
		}
		i++;
	}
	
}

int main()
{
	char *s = "ayoub+ouahidi+";
	printf("num of words is : %d\n", countwords(s, '+'));
}
