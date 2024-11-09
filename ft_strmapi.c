/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:07:00 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/08 18:43:43 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapi;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	mapi = (char *)malloc(ft_strlen(s) + 1);
	if (!mapi)
		return (NULL);
	while (s[i])
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
