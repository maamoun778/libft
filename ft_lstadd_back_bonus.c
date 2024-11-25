/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:20:13 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/16 00:07:18 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
	{
		ft_lstlast(*lst)->next = new;
	}
	else
		*lst = new;
}
/* int main()
{
   t_list *new = malloc(sizeof(t_list));
    t_list *head = NULL;
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    node1->content = strdup("a");
    node2->content = strdup("b");
    node3->content = strdup("c");
    new->content = strdup("d");
    head = node1;
    head->next = node2;
    head->next->next = node3;
    head->next->next->next = NULL;
    ft_lstadd_back(&head, new);
    while (head != NULL)
    {
        printf("%s\n", (char *)head->content);
        head = head->next;
    }
} */
