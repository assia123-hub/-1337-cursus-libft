/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:42:23 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/18 17:53:30 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*c;
	size_t	t_size;
	size_t	i;

	i = 0;
	if (size && count > SIZE_MAX / size)
		return (NULL);
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
