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

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *newstr;
	unsigned int i;
	char *str;

	str = (char *)s;
	newstr = malloc(len * sizeof(char) + 1);
	if (newstr == NULL)
		return NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == start)
		{
			ft_memmove(newstr, (const char *)&str[i], len);
			break;
		}
		i++;
	}
	newstr[len] = '\0'; 
	return (newstr);
}

int  main()
{
	int i = 0;
	char *str = "lorem ipsum dolor sit amet";
	char *newstr = ft_substr(str, 0, 10);
	while (i < 20)
	{
		printf("%d|| %c\n", newstr[i], newstr[i]);
		i++;
	}
	printf("the string's is : %s\n", newstr);
}
