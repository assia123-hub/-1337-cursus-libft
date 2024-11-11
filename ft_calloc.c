/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:42:23 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/09 19:42:38 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*c;
	size_t	total_size;
	size_t	i;

	total_size = count * size;
	c = (char *)malloc(total_size);
	if (c == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < total_size)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}

/*int	main(void)
{
	size_t	j;
	char	*ptr;

	j = 0;
	ptr = ft_calloc(3, 4);
	if (ptr)
	{
		while (j < 12)
		{
			printf("%d ", ptr[j]);
			j++;
		}
	}
	return (0);
}*/
//[fail]: your calloc don't work with 0 size