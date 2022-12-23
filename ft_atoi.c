/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor < mtumgor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:24:44 by mtumgor           #+#    #+#             */
/*   Updated: 2022/12/22 00:55:30 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				number;
	int				sign;
	unsigned int	i;

	sign = 1;
	i = 0;
	number = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		&& str[i] != '\0')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	if (sign < 0)
		return (number *= -1);
	return (number);
}
