/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:01:39 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/27 12:01:49 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;
	size_t	ret;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	ret = lendest + lensrc;
	i = 0;
	if (lendest >= size)
		return (lensrc + size);
	while(src[i] != '\0' && (lendest + 1) < size)
	{
		dest[lendest] = src[i];
		i++;
		lendest++;
	}
	dest[lendest] = '\0';
	return (ret);
}

// int main()
// {
//     char src[] = "ayoub ouahidi";
//     char dest[] = "a";

//     int n = ft_strlcat(dest, src, 6);
// 	// int d = strlcat(dest, src, 6);

//     printf("string's function : %d\n", n);
//     // printf("string's function : %d\n", d);

// }