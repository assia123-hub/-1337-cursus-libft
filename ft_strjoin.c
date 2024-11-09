/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:34:14 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/08 18:44:02 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*a;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	a = (char *)malloc(sizeof(char) * len1 + len2 + 1);
	if (!a)
		return (NULL);
	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		a[i] = s2[j];
		j++;
		i++;
	}
	a[i] = '\0';
	return (a);
}

/*int	main(void)
{
	printf("%s", ft_strjoin("assia", "chalh"));
	return (0);
}*/
