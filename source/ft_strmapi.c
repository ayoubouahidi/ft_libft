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
#include <stdlib.h>



char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int lens;
	char *str;
	size_t i;

	lens = ft_strlen(s);
	str = malloc(sizeof(char) * lens + 1);	
	i = 0;
	while (i < lens)
	{
		str[i] = f(i , s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char ft_toupper(unsigned int i, char c) {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 	{ 
// 		return c - 32; 
// 	}
// 	return c;
// }
// int main(void)
// {
// 	char *str = "ayoub";
// 	char *r = ft_strmapi(str, ft_toupper);

// 	printf("%s\n", r);
// }
