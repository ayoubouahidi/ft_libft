/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:40:21 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/06 16:40:36 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
int	ft_tolower(unsigned int a , int c)
{
	(void)a;
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t lens = ft_strlen(s);
	char *str;
	size_t i;

	lens = ft_strlen(s);
	while (i < lens)
	{
		str[i] = f(i , s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
int main()
{
	char *s = "AYOUB 19";
	char newstr = ft_strmapi(s, ft_tolower())
}