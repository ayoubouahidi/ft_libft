/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:59:18 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/26 15:00:35 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

// int check(size_t i, size_t supp, char const *s1, char const *set )
// {
// 	size_t j;
// 	size_t lenstr1;
// 	size_t lenset;

// 	lenset = ft_strlen(set);
// 	lenstr1 = ft_strlen(s1);
// 	while(i < lenset)
// 	{
// 		j = 0;
// 		while(s1[j] != '\0')
// 		{
// 			if (set[i] == s1[j])
// 				supp++;
// 			j++;
// 		}
// 		j = lenstr1 - 1;
// 		while(set[i] == s1[j])
// 		{
// 			if (set[i] == s1[j])
// 				supp++;
// 		 	j--;
// 		}
// 		i++;
// 	}
// 	return (supp);
// }

// int lenmalloc(char const *s1, char const *set)
// {
// 	size_t i;
// 	size_t supp;
// 	size_t lenstr1;

// 	lenstr1 = ft_strlen(s1);
// 	i = 0;
// 	supp = 0;
// 	supp = check(i, supp, s1, set);
// 	return (lenstr1 - supp);
// }

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t cmpt;
	char *newstr;

	i = 0;
	cmpt = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
		cmpt++;
	}
	if (ft_strlen(s1) == cmpt)
		return ("");
	j = ft_strlen(s1) - 1;
	while (s1[j] != '\0' && ft_strchr(set, s1[j]))
	{
		j--;
		cmpt++;
	}
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) - cmpt + 1));
	if (newstr == NULL)
		return NULL;
	ft_strlcpy(newstr, s1 + i, (ft_strlen(s1) - cmpt + 1));
	return (newstr);
}

// int main()
// {
// 	char *str = "!+payo ub+ouahidi+++!";
// 	char *set = "!+";
// 	char *newstr = ft_strtrim(str, set);
// 	printf("the size is : %s\n", newstr);
// }
