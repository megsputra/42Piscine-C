/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:50:30 by mputra            #+#    #+#             */
/*   Updated: 2018/09/04 19:47:18 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	if (*begin_list)
	{
		temp = ft_create_elem(data);
		temp->next = *begin_list;
		*begin_list = temp;
	}
	else
		*begin_list = ft_create_elem(data);
	return (*begin_list);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*start;
	int		i;

	i = 0;
	start = 0;
	while (i < ac)
	{
		start = ft_list_push_front(&start, av[i]);
		i++;
	}
	return (start);
}
