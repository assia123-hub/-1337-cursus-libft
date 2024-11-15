/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:38:25 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/14 20:33:26 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	const char		*last = 0;

	a = (unsigned char)c;
	while (*s)
	{
		if (*s == a)
		{
			last = s;
		}
		s++;
	}
	if (a == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}

/*int	main(void)
{
	char	*arr;
	char	*result;

	arr = "assia chalh";
	result = ft_strrchr(arr, '\0');
	printf("%s", result);
	return (0);
}*/
