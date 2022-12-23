/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtumgor < mtumgor@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:55:58 by mtumgor           #+#    #+#             */
/*   Updated: 2022/12/23 00:30:28 by mtumgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*root;

	i = 0;
	if (lst == NULL)
		return (i);
	root = lst;
	while (root != NULL)
	{
		root = root->next;
		i++;
	}
	return (i);
}
