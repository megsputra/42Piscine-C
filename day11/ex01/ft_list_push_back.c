/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:54:30 by mputra            #+#    #+#             */
/*   Updated: 2018/09/04 11:28:28 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *temp;

	if (!(*begin_list))
	{
		new = ft_create_elem(data);
		*begin_list = new;
	}
	else
	{
		temp = *begin_list;
		while (temp->next)
			temp = temp->next;
		temp->next = ft_create_elem(data);
	}
}
