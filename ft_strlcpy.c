/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:46:07 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/15 22:36:21 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	src_len = i;
	if (size > 0)
	{
		j = 0;
		while (j < size - 1 && src[j])
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (src_len);
}
// #include<stdio.h>
// int	main(void)
// {
// 	char s[20] = "man";
// 	char d[20] = "kl4r";
// 	int c = ft_strlcpy(d,s,2);
// 	printf("%d", c);
// } 