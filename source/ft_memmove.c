/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:59:18 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/26 15:00:35 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t numByte)
{
	size_t	i;
	char	*newdest;
	char	*newsrc ;

	newdest = (char *)dest;
	newsrc = (char *)src;
	if (newdest > newsrc)
	{
		i = numByte;
		while (i-- > 0)
		{
			newdest[i] = newsrc[i];
		}
	}
	else
	{
		ft_memcpy(newdest, newsrc, numByte);
	}
	return (dest);
}
/*
int main()
{
	char src[]  = "012345";
	char src1[]  = "012345";
	// char dest_s[] = "ayoub";
	// char dest_a[] = "ayoub";

//   memmove(src + 2, src, 3);
  printf("string's function : %s\n", src);
  ft_memmove(src1 + 2, src1, 3);
  printf("ayoub's function :  %s\n", src1);
}
*/
