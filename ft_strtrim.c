/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:17:12 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/14 03:01:14 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*s;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	s = malloc(end - start + 1);
	if (!s)
		return (NULL);
	while (start < end)
		s[i++] = s1[start++];
	s[i] = '\0';
	return (s);
}
// int main()
// {
//     char str[] = "ABAB";
//     printf("%s",ft_strtrim(str,"AB"));
// }