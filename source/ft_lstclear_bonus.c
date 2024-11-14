/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:16:29 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/10 17:16:32 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    while (*lst != NULL)
    {
        tmp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = tmp;     
        (*lst) = NULL;
    }   
}

// void delete(void *a)
// {
//     free(a);
// }

// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     int i = 1;
//     int i1 = 2;
//     int i2  = 3;
//     node1 = ft_lstnew(malloc(sizeof(int)));
//     node2 = ft_lstnew(malloc(sizeof(int)));
//     node3 = ft_lstnew(malloc(sizeof(int)));

//     *(int *)node1->content = i;
//     *(int *)node2->content = i1; 
//     *(int *)node3->content = i2;

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);

//     t_list *head = node1;
//     ft_lstclear(&node3, delete);

//     while (node1 != NULL)
//     {
//         printf("%d\n", *(int *)node1->content);
//         node1 = node1->next;
//     }   
// }//exit(0);
