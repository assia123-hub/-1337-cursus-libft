/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:14:08 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/03 15:53:59 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}

int	main(void)
{
	char	arr[] = "assia chalh";
	size_t	i;

	i = 0;
	ft_bzero(arr, sizeof(arr));
	while (i < sizeof(arr))
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}
