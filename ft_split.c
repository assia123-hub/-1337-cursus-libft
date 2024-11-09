/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:27:59 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/09 18:43:00 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

char	*fill_word(char const *s, char c)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	str = (char *)malloc(len + 1);
	if (!str)
	{
		return (NULL);
	}
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			result[j] = fill_word(s + start, c);
			if (!result[j])
			{
				ft_free(result);
				return (NULL);
			}
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

/*int	main(void)
{
	char	*s;
	char	delimiter;
	char	**result;
	int		i;

	i = 0;
	s = "Hello world this is a test";
	delimiter = ' ';
	result = ft_split(s, delimiter);
	if (result)
	{
		while (result[i])
		{
			printf("Word %d: %s\n", i, result[i]);
			i++;
		}
		ft_free(result);
	}
	return (0);
}*/
