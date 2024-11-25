/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:41:16 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/14 00:02:12 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if ((char)c == '\0')
	{
		return ((char *)(s + ft_strlen(s)));
	}
	return (NULL);
}
/* #include<stdio.h>
int	main(void)
{
	char s[] = "maamoun";
	char c = 'u';
	printf("%s\n",ft_strrchr(s,c));
} */