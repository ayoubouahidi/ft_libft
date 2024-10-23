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

void	*ft_memset(void *a, int b, size_t c)
{
  size_t i;
  unsigned char *dest = (unsigned char *)a;

  i = 0;
  while(i !=  c)
  {
    dest[i] = (unsigned char)b;
    i++;
  }
  return (a);
}


int main()
{
  char a[] = "hello ayoub";
  char t[] = "hello ayoub";
  // int b = '*';
  // int c = 2;
  
  memset(a, '*', 14);
  printf("function string : %s\n", a);

  ft_memset(t, '*', 14);
  printf("function ayoub : %s\n", t);

  // printf("%d\n", ft_isascii(199));
}
