/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:40:40 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/25 12:35:45 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	u;

	i = 0;
	ptr = (unsigned char *)s;
	u = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == u)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
/* #include<stdio.h>
int	main(void)
{
	char s[] = "maa\0oun";
	char c = 'o';
	printf("%s",ft_memchr(s,c,8));
} */