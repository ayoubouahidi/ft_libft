/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:47:58 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/10 12:48:00 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>



void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!lst || !del)
        return;
    del(lst->content);
    free(lst);
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
//     int i = 20;
//     int i1 = 18;
//     int i2 = 20;
//     node1 = ft_lstnew(malloc(sizeof(int)));
//     node2 = ft_lstnew(malloc(sizeof(int)));
//     node3 = ft_lstnew(malloc(sizeof(int)));
//     *(int *)node1->content = 20;
//     *(int *)node2->content = 18; 
//     *(int *)node3->content = 22;
//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     t_list *head = node1; 
//     // while (node1 != NULL)
//     // {
//     //     printf("%d\n", *(int *)(node1->content));
//     //     node1 = node1->next;
//     // }
//     ft_lstdelone(node3, delete);
//     while (node1 != NULL)
//     {
//         printf("%d\n", *(int *)(node1->content));
//         node1 = node1->next;
//     }

// }