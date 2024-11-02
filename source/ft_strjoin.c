/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:31:39 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/02 01:24:37 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *newstr;
	size_t lens1;
	size_t lens2;
	size_t i;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (lens1 + lens2) + 1);
	if (newstr == NULL)
		return NULL;
	i = 0;
	while (i < lens1)
	{
		newstr[i] = s1[i];
		i++;
	}
	while (i < lens1 + lens2)
	{
		newstr[i] = s2[i - lens1];
		i++;
	}
	newstr[i] = '\0';
	return newstr;
}
