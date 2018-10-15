/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:40:43 by mputra            #+#    #+#             */
/*   Updated: 2018/08/30 12:28:13 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(*arr) * (max - min + 1));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
