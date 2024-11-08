/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:49:24 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/08 14:26:33 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		temp;
	int		len;
	char	*res;

	temp = n;
	len = 0;
	if (n == -2147483648)
	{
		res = (char *)malloc(12 * sizeof(char));
		if (!res)
			return (NULL);
	}
	if (n == 0)
	{
		res = (char *)malloc(2 * sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (n < 0)
	{
		len++;
		n = -n;
	}
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		res[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
