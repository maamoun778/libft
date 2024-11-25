/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <mel-hafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:05:30 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/11/16 02:56:07 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
//  #include<stdio.h>
// int	main(void)
// {
// 	char str[10] = "hiahh";
// 	ft_memset(str,'Z',5);
// 	printf("%s",str);
// }
int main()
{
	int tt[] = {0,0,0,0};
	ft_memset(tt,2,2);
	ft_memset(tt,43,1);
	ft_memset(tt + 1,2,2);
	ft_memset(tt + 1,43,1);
	printf("%d\n",tt[1]);
} 