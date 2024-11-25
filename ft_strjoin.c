/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:16:08 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/14 02:45:04 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	int		len;
	char	*ptr;

	if (!str1 || !str2)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(str1) + ft_strlen(str2);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (str1[i])
	{
		ptr[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		ptr[i + j] = str2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
// int main()
// {
//     char ptr1[] = "hello   ";
//     char ptr2[] = "maamoun";
//     printf("%s\n",ft_strjoin(ptr1,ptr2));
// }