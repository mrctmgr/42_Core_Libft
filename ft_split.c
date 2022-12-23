/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor < mtumgor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:35:59 by mtumgor           #+#    #+#             */
/*   Updated: 2022/12/21 00:37:21 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	if (s[i] == '\0')
		count = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count + 1);
}

static int	ft_word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	i;
	size_t	words;

	i = 0;
	if (s == (char *) '\0')
		return (0);
	words = ft_word_count(s, c);
	buffer = malloc(sizeof(char *) * (words + 1));
	if (!buffer)
		return (0);
	while (i < words)
	{
		while (*s == c && *s)
			s++;
		buffer[i] = ft_substr(s, 0, ft_word_len(s, c));
		if (buffer[i] == (char *) '\0')
			free(buffer);
		s += ft_word_len(s, c);
		i++;
	}
	buffer[i] = (char *) '\0';
	return (buffer);
}
