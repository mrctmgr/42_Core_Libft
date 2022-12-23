/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor < mtumgor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:26:33 by mtumgor           #+#    #+#             */
/*   Updated: 2022/12/23 00:59:46 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s1) + 1;
	ptr = (char *) malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	if (s1 == 0)
		return (0);
	ptr = ft_memcpy(ptr, s1, len);
	return (ptr);
}
