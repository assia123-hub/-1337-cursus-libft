/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:42:43 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/15 14:02:36 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= '0'
			&& x <= '9'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d", ft_isalnum('a'));
	return (0);
}*/
