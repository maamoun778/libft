/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:08:53 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/15 23:35:24 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
//#include <stdio.h>

/* int	main(void)
{
	char ptr[] = "ABCDEFGHI";
	printf("%s\n", ft_substr(ptr, 2, 3));
} */