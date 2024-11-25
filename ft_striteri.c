/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:11:08 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/13 02:15:59 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper_by_index(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }
/* int main()
{
	char str[] = "Hello, World!";
	ft_striteri(str, to_upper_by_index);
	printf("%s\n", str);
} */