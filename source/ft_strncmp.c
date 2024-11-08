/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:34:56 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/26 22:37:23 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (i == n)
		return (0);
	while ((i < ft_strlen(str1) && i < ft_strlen(str2) ) && i < n)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// int main()
// {
//     char str1[] = "Ayoub";
//     char str2[] = "Ayoub";

//     int a = ft_strncmp("test\200", "test\0", 6);
// 	int s = strncmp("test\200", "test\0", 6);

//     printf("ayoub's function : %d\n", a);
// 	printf("string's function : %d\n", s);
// }

