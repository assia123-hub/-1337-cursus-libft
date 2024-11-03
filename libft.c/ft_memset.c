/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:47:22 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/03 16:25:27 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main(void)
{
	char	arr[] = "assia chalh";
	int		i;

	ft_memset(arr, '*', sizeof(arr));
	i = 0;
	while (i < sizeof(arr))
	{
		printf("%c", arr[i]);
		i++;
	}
	return (0);
}
