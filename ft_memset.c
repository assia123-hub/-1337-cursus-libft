/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:47:22 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/15 11:35:41 by aschalh          ###   ########.fr       */
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

/*int	main(void)
{
	char	str[10] = "Hello";
	int		arr[5] = {1, 2, 3, 4, 5};
	int		arr[5] = {1, 2, 3, 4, 5};
	int		i;

	ft_memset(str, 'X', 5);
	printf("%s\n", str);
}*/

/*int main(void) {
	int i = 42;         //1337
	ft_memset(&i, 0, 4);
	ft_memset(&i, 0b00000101, 2);
	ft_memset(&i, 0b00111001, 1);       
	printf("%d", i);c
	return (0);
}*/
