/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor < mtumgor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:11:10 by mtumgor           #+#    #+#             */
/*   Updated: 2022/12/21 22:16:38 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sum;
	size_t	dsize;
	int		i;
	int		k;

	dsize = size;
	i = 0;
	k = 0;
	sum = ft_strlen(dst) + ft_strlen(src);
	while (dst[i] != '\0' && size > 0)
	{
		i++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + dsize);
	while (src[k] != '\0' && size > 1)
	{
		dst[i] = src[k];
		i++;
		k++;
		size--;
	}
	dst[i] = '\0';
	return (sum);
}
