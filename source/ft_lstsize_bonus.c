/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:12:54 by ayouahid          #+#    #+#             */
/*   Updated: 2024/11/10 10:12:59 by ayouahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int cmpt;

    cmpt = 0;
    while(lst != NULL)
    {
        lst = lst->next;
        cmpt++;
    }
    return (cmpt);
}

// test size
// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     int i = 20;
//     int i1 = 18;
//     int i2 = 20;

//     node1 = ft_lstnew(&i);
//     node2 = ft_lstnew(&i1);

//     ft_lstadd_front(&node1, node2);
//     while (node1 != NULL)
//     {
//         printf("%d\n", *(int *)(node1->content));
//         node1= node1->next;
//     }
    
//     int cmpt = ft_lstsize(node2);
//     printf("%d\n", cmpt);
// }
