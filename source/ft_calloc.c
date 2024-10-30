/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:05:14 by ayouahid          #+#    #+#             */
/*   Updated: 2024/10/22 22:22:02 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return NULL;
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return NULL;
	ft_memset(ptr, 0, nmemb * size);
	return ptr;
}
/*
int main() { 
	int *a = ft_calloc(10, sizeof(int)); 
	printf("ayoub's function : %d\n", *(a + 0));
	*(a + 0) = 1;
	printf("ayoub's function : %d\n", *(a + 0));
	int *p = calloc(10, sizeof(int)); 
	printf("stdlib's function : %d\n", *p);
	free(a); 
	free(p); 
	return 0; 
}
*/
