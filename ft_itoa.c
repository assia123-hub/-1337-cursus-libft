/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:49:24 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/15 18:23:10 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_size(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		count;
	long	num;
	int		i;

	num = n;
	count = count_size(num);
	if (n == 0)
		count = 1;
	dst = (char *)malloc((count + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	dst[count] = '\0';
	if (num < 0)
	{
		dst[0] = '-';
		num = -num;
	}
	i = count - 1;
	while (num > 0)
	{
		dst[i--] = (num % 10) + '0';
		num = num / 10;
	}
	if (n == 0)
		dst[0] = '0';
	return (dst);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-123));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(123));
// 	printf("%s\n", ft_itoa(-9876));
// 	return (0);
// }
