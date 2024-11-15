/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:42:23 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/14 17:49:33 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*c;
	size_t	t_size;
	size_t	i;

	i = 0;
	t_size = count * size;
	c = (char *)malloc(t_size);
	if (c == NULL)
		return (NULL);
	while (i < t_size)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}

/*int	main(void)
{
	size_t j;
	size_t count;
	char *ptr;

	count = 7;
	j = 0;
	ptr = ft_calloc(count, sizeof(int));
	while (j < count)
	{
		printf("ptr[%zu] = %d\n", j, ptr[j]);
		j++;
	}
	free(ptr);
	return (0);
}*/