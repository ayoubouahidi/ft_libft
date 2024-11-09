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
	size_t i;
	size_t j;
	char *str;

	i = 0;	
	while (s[i] != '\0' && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if(str == NULL)
		return NULL;
	j = 0;
	while (i > j)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return str;
}

char 	**ft_split(char const *s, char c)
{
	size_t	i;
	int	j;
	int	words;
	char	**str;

	words = countwords(s, c);
	if (s[0] == '\0')
	{
		str = (char **)malloc(sizeof(char *) * 1);
		str[0] = NULL;
		return (str);
	}
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if(str == NULL)
		return NULL;
	
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while(s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			str[j] = mallocword((char *)s + i, c);
			j++;
		}
		while(s[i] != '\0' && s[i] != c)
			i++;
	}
	str[j] = NULL;
	return str;
}

// int main()
// {
// 	char *s = "ayoub+ayoub";
// 	size_t i;
// 	i = 0;
// 	char **str = ft_split("          ", ' ');
// 	while (str[i] != NULL)
// 	{
// 		printf("num of words is : %s\n", str[i]);
// 		// free(str[i]);
// 		i++;
// 	}
// 	if (str[0] == NULL)
// 		printf("test done");
// 	// free(str);
// }
