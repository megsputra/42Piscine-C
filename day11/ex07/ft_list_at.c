/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:57:03 by mputra            #+#    #+#             */
/*   Updated: 2018/09/05 14:51:12 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	current;

	current = 0;
	while (begin_list)
	{
		if (current == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		current++;
	}
	return (0);
}
