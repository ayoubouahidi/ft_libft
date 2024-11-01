/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:31:39 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/21 16:33:21 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *str;
	char *newstr;
	size_t i;

	if (s == NULL)
		return NULL;
	str = (char *)s;
	newstr = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (newstr == NULL)
		return NULL;
	i = 0;
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return newstr;
}

int main()
{
  char *str = "ayoub ouahidi";

  char *newstr = strdup(str);
  printf("string's function : %s\n", newstr);

  char *ayoubstr = ft_strdup(str);
  printf("ayoub's function : %s\n", ayoubstr);
}