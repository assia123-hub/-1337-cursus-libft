/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:27:54 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/14 20:31:13 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *)s);
		}
		s++;
	}
	if (a == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int	main(void)
{
	char	*str;
	char	*result;

	str = "assiachlh";
	result = ft_strchr(str, 'a');
	printf("%s", result);
	return (0);
}*/
