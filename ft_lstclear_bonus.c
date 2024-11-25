/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:21:40 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/16 00:23:08 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		free (*lst);
		*lst = node;
	}
}
/* void del_one(void *content)
{
    if(content)
        free(content);
}

int main()
{
    t_list *head = NULL;
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    head = node1;
    head->next = node2;
    head->next->next = node3;
    head->next->next->next = NULL;
    node1->content = strdup("a");
    node2->content = strdup("b");
    node3->content = strdup("c");
    while (head != NULL)
    {
        printf("before clear : %s\n", (char *)head->content);
        head = head->next;
    }
    ft_lstclear(&head, del_one);
     while (head != NULL)
    {
        printf("after clear : %s\n", (char *)head->content);
        head = head->next;
    }
} */
