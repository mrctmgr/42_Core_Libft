/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor < mtumgor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:16:59 by mtumgor           #+#    #+#             */
/*   Updated: 2022/12/21 23:18:17 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*ptr;

	index = 0;
	ptr = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			ptr = (char *)(s + index);
		index++;
	}
	if (s[index] == (char)c)
		return ((char *) s + index);
	return (ptr);
}
