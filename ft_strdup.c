/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:29:11 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/04 20:05:00 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	cpy = (char *)malloc(len + 1);
	if (!cpy)
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/*int	main(void)
{
	char	*arr;

	arr = "hellloooooo";
	printf("%s", ft_strdup(arr));
}*/
