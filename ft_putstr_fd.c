/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:27:09 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/04 18:55:54 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int	main(void)
{
	ft_putstr_fd("Hello, World!\n", 1);
	ft_putstr_fd("This is a test string.\n", 1);
	ft_putstr_fd("Goodbye!\n", 1);
	return (0);
}*/
