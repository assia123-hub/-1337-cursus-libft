/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:27:54 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/18 09:50:13 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;

	a = (char)c;
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
