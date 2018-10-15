/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:29:40 by mputra            #+#    #+#             */
/*   Updated: 2018/08/30 14:06:00 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	size = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}

int main()
{
	int* res = NULL;
	int i;
	int size;

	size = ft_ultimate_range(&res, 5, 10);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = NULL;
	size = ft_ultimate_range(&res, -20, -17);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
	for (i = 0; i < 3; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = (int*)1;
	size = ft_ultimate_range(&res, 10, 5);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
}
