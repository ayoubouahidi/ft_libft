/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:46:29 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/27 15:46:32 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (((unsigned char)str1[i] != '\0' && (unsigned char)str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// int main()
// {
// 	char str1[20] = "zyoub";
// 	char str2[20] = "ayoub";

// 	int n = memcmp("t\200", "t\0", 2);
// 	printf("string's function : %d\n", n);

// 	int a = ft_memcmp("t\200", "t\0", 2);
// 	printf("ayoub's function : %d\n", a);
// }

