/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:22:33 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/16 00:02:23 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/* int main()
{
    t_list *head = NULL;
    t_list *new = ft_lstnew("hey");
    ft_lstadd_front(&head, new);
    t_list *new2 = ft_lstnew("hello");
    ft_lstadd_front(&head, new2);
    printf("%s", ((char *)head->content));
    printf("%s", ((char *)head->next->content));
} */
