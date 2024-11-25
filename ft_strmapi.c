/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:16:43 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/14 02:45:42 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	i = 0;
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// char to_upper_by_index(unsigned int i, char c)
// {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }
// #include<stdio.h>
// int main()
// {
//     char *str = "abc";
//     char *result = ft_strmapi(str, to_upper_by_index);

//         printf("%s\n", result);
// }