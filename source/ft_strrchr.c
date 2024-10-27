/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:06:12 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/26 16:12:50 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		lenstr;
	char	*s;

	s = (char *)str;
	lenstr = ft_strlen(str);
	i = lenstr;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
/*
 int main()
 {
   char str[20] = "esayoubaes";

   printf("string's function : %s\n", strrchr(str, 't'));
   printf("ayoub's function : %s\n", strrchr(str, 't'));
 }
 */
