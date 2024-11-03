/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:29:11 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/03 17:20:24 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(len + 1));
	if (!cpy)
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	return (cpy);
}

int	main(void)
{
	char	*arr;

	arr = "hellloooooo";
	printf("%s", ft_strdup(arr));
}
