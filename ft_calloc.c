/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:28:36 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/13 02:21:49 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*tmp;

	tmp = malloc(num * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, num * size);
	return (tmp);
}
/* int main()
{
	int i = 0;
	char * tmp = ft_calloc(5,sizeof(char));
	i = 0;
	while (i < 5)
	{
		printf("%d",tmp[i]);
		i++;
	}

}  */
