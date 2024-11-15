/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:25:41 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/15 14:46:03 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = open("file.txt", O_RDWR | O_CREAT | O_TRUNC, 0666);
// 	ft_putendl_fd("hello world", fd);
// 	printf("%d", fd);
// 	if (fd == -1)
// 	{
// 		printf("%d", fd);
// 		exit(1);
// 	}
// 	close(fd);
// }
