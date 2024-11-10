/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:02:39 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/09 22:02:44 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list  *ft_lstnew(void *content)
{
    t_list  *tmp;

    tmp = (t_list *)malloc(sizeof(t_list));
    tmp->content = content;
    tmp->next = NULL;
    return(tmp);
}

// int main()
// {
//     t_list *tmp;
//     int i = 1234;
//     tmp = ft_lstnew(&i);
//     printf("%d", *(int *)tmp->content);
// }