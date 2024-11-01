/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:59:03 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/23 16:20:26 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memset(void *a, int b, size_t c)
{
  size_t i;
  unsigned char *dest = (unsigned char *)a;

  i = 0;
  while(i < c)
  {
    dest[i] = (unsigned char)b;
    i++;
  }
  return (a);
}

/*
int main()
{
  // int b = '*';
  // int c = 2;
  int a = 2;
  memset((char *)a , 57, 1);
  printf("function string : %d\n", a);

  // ft_memset(t, '*', 14);
  // printf("function ayoub : %s\n", t);

  // printf("%d\n", ft_isascii(199));
}
*/
