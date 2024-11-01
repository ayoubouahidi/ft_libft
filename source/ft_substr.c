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
	newstr = malloc(len * sizeof(char));
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
	return (newstr);
}
