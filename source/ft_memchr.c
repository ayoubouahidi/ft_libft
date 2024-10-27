/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:07:38 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/27 15:07:41 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while(i < size)
	{
		if(str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str[20] = "ayoub ouahidiz";\

	char *chr =  memchr(str,'z', 30);
	printf("string's function : %s\n", chr);

	char *test =  ft_memchr(str,'z', 30);
	printf("ayoub's function : %s\n", test);
}
*/
