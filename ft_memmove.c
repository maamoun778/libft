/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:05:33 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/14 04:58:32 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (n-- > 0)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
	char src[20] = "";
	char *dest = ft_memmove(src + 2,src,0);
	char *dest2 = memmove(src + 2,src,0);

	printf("-%s-\n",dest);
	printf("-%s-\n",dest2);
} */
