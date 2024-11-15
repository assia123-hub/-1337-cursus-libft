/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:17:19 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/15 14:46:17 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = open("file.txt", O_RDWR | O_CREAT | O_TRUNC, 0666);
// 	ft_putchar_fd('a', fd);
// 	printf("%d", fd);
// 	if (fd == -1)
// 	{
// 		printf("%d", fd);
// 		exit(1);
// 	}
// 	close(fd);
// }
