/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:08:50 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/26 16:05:51 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *str, int c)
{
    int        i;
    i = 0;
    if(str[0] == '\0')
		return ((char *)&str[i]);
    while (str[i] != '\0')
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&str[i]);
    return (NULL);
}


// int main()
// {
// char *str = "ayaoub";
//   printf("string's function : %s\n", strchr(str + 2, '\0'));
//   printf("ayoub's function : %s\n", ft_strchr(str + 2, '\0'));
// }
