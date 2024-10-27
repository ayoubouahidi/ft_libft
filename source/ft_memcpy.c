/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:55:50 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/25 21:33:33 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t numByte)
{
	size_t		i;
	char		*newdest ;
	const char	*newsrc;

	newdest = (unsigned char *)dest;
	newsrc = (const unsigned char *)src;
	i = 0;
	while (i < numByte)
	{
		newdest[i] = newsrc[i];
		i++;
	}
	return (dest);
}
/*
int main(){
  char src[] = "ay";
  char dest_a[5];

  // ft_memcpy(dest_a,src, 2);
  memcpy(dest_a,src,2);
  printf("ayoub's function : %s\n", dest_a);
}*/
