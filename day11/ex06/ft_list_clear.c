/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:47:48 by mputra            #+#    #+#             */
/*   Updated: 2018/09/04 19:50:33 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;
	t_list	*del;

	temp = *begin_list;
	if (!(*begin_list))
		return ;
	while (temp)
	{
		del = temp;
		free(temp);
		temp = del->next;
	}
	*begin_list = NULL;
}
