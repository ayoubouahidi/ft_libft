/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:35:16 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/10 10:35:19 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  
#include <stdio.h>

t_list  *ft_lstlast(t_list *lst)
{
    t_list *last;

    while (lst != NULL)
    {
        if (lst->next == NULL)
        {
            last = lst;
        }
        lst = lst->next;
    }
    return (last);
}

// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     // why node take pointer ??
//     // char *str0 = "ayoub";
//     // char *str1 = "ouahidi";
//     // char *str2 = "22ans";
//     int i = 20;
//     int i1 = 18;
//     int i2 = 20;

//     node1 = ft_lstnew(&i);
//     node2 = ft_lstnew(&i1);
//     node3 = ft_lstnew(&i2);

//     ft_lstadd_front(&node3, node2);
//     ft_lstadd_front(&node2, node1);
//     t_list *head = node1;
//     while (node1 != NULL)
//     {
//         printf("%d\n", *(int *)(node1->content));
//         node1 = node1->next;
//     }
//     int cmpt = ft_lstsize(head);
//     printf("size of node is %d\n", cmpt);
//     t_list *last;
//     last = ft_lstlast(head);
//     printf("%s\n", last->content);
// }