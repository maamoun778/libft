/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:41:02 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/14 00:00:05 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	if (!dest && size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	i = 0;
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/* int main()
{
	char s[] = "maam";
	char d[] = "kkkkl";
	size_t b = ft_strlcat(d,s,5);
	printf("%d",b);
} */
