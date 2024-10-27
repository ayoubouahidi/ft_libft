/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:41:00 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/27 16:41:25 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "prenom : ayoub,nom : ouahidi";
	char *tofind = "ayoub";

	char *result= strnstr(str, tofind, 5);
	printf("string's function : %s\n", result);


}
