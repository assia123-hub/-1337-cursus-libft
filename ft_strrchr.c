/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:38:25 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/17 15:16:11 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	const char		*last = 0;

	a = (unsigned char)c;
	while (*s)
	{
		if (*s == a)
			last = s;
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return ((char *)last);
}
