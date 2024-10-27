/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:27:38 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/25 20:51:22 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *a, size_t b)
{
	size_t	i;
	char	*c;

	c = (unsigned char *)a;
	i = 0;
	while (i != b)
	{
		c[i] = '\0';
		i++;
	}
}
/*
 int main()
 {
    char a[] = "ayoub";
	char b[] = "ayoub";

   bzero(a + 2, sizeof(char) * 2);
   printf("string's function : %s\n", a);

   ft_bzero(b + 2, sizeof(char) * 2);
   printf("ayoub's string : %s\n", b);
 }
*/