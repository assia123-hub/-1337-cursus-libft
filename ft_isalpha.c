/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:43:01 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/06 11:27:50 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d", ft_isalpha(129));
	return (0);
}*/

/*static const unsigned char alpha_table[256] = {
	[65 ... 90] = 1,  // uppercase A-Z
	[97 ... 122] = 1  // lowercase a-z
};

int	ft_isalpha(int c) {
	return ((c >= 0 && c < 256) ? alpha_table[c] : 0);
}*/
