/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:25:54 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/16 01:29:56 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
}
/* void del_one(void *content)
{
    if(content)
        free(content);
} */
/* void del_content(void *content)
{
    if(content)
    {
        free(content);
    }
} */
/* int main()
{
    t_list *head = NULL;
    t_list *node = malloc(sizeof(t_list));
    node->content = strdup("a");
    head = node;
    node->next = NULL;
    printf("before deletion : %s\n", (char *)node->content);
    ft_lstdelone(head, del_content);
    printf("after deletion : %s\n", (char *)node->content);
} */
