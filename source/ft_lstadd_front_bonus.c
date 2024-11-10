/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:56:59 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/09 22:57:02 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL)
        return ;
    new->next = *lst;
    *lst = new;
}

int main()
{
    t_list *node1;
    t_list *node2;
    int i1 = 1234;
    int i2 = 4321;
    node1 = ft_lstnew(&i1);
    node2 = ft_lstnew(&i2);
    ft_lstadd_front(&node1 , node2);
    while (node1 != NULL)
    {
        printf("%d\n", *(int *)(node1->content));
        node1 = node1->next;
    }
}