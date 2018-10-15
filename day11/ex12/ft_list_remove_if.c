/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:31:35 by mputra            #+#    #+#             */
/*   Updated: 2018/09/05 11:05:02 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*cur;
	t_list	*prev;
	t_list	

	cur = *begin_list;
	while (cur)
	{
		if ((*cmp)(*begin_list->data, data_ref) == 0)
		{
			if (cur != *beginlist)

		}
	}
	/*
	t_list	*prev;

	int		size;
	
	size = ft_list_size(*begin_list);
	prev = *begin_list;
	if (size == 1 && !(*cmp)(*begin_list->data, data_ref))
	{
		free(prev);
		begin_list = 0; 
	}
	else
	{
		while (*begin_list->next)
		{
			if ((*cmp)(*begin_list->data, data_ref) == 0)
			{
				*begin_list = *begin_list->next;
				free(prev);
			}
		}
	}
	*/
}
