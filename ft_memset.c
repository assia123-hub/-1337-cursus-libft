/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:47:22 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/16 16:24:54 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	arr[5] = {1, 2, 3, 4, 5};
// 	int		i;

// 	// char	str[10] = "Hello";
// 	i = 0;
// 	ft_memset(arr, 'X', 5);
// 	while (i < 5)
// 	{
// 		printf("%c", arr[i]);
// 		i++;
// 	}
// }
// int main(void) 
// {
// 	int i;         //13375
// 	ft_memset(&i, 0, 4);
// 	ft_memset(&i, 52, 2);
// 	ft_memset(&i, 63, 1);
// 	printf("%d", i);
// 	return (0);
// }
