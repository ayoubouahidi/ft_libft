/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:57:43 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/10 11:57:46 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    t_list *tmp = *lst;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new;

}

// test ft_lstadd_back
// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     int i = 1;
//     int i1 = 2;
//     int i2 = 3;
//     node1 = ft_lstnew(&i);
//     node2 = ft_lstnew(&i1);
//     node3 = ft_lstnew(&i2);
//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     t_list *head = node1; 
//     while (head != NULL)
//     {
//         printf("%d\n", *(int *)(head->content));
//         head = head->next;
//     }
// }   
