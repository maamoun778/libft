/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:32:49 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/15 23:32:56 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, src, len + 1);
	return (dup);
}
// int main()
// {
// 	char mm[] = "xjkhsdds";
// 	char *ll = ft_strdup(mm);
// 	printf("%s",ll); 
// }
