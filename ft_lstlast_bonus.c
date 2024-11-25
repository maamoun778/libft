/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:23:17 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/16 00:14:07 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/* int main ()
{
    t_list *head = NULL;
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    node1->content = strdup("a");
    node2->content = strdup("b");
    node3->content = strdup("c");
    head = node1;
    head->next = node2;
    head->next->next = node3;
    node3->next = NULL;
    t_list *last = ft_lstlast(head);
    printf("%s", (char *)last->content);
} */