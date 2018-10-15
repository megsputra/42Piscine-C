/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:42:41 by mputra            #+#    #+#             */
/*   Updated: 2018/08/30 14:47:04 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		getmemsize(char **argv)
{
	int i;
	int mem;

	i = 0;
	mem = 0;
	while (argv[i])
	{
		mem += (ft_strlen(argv[i]));
		++i;
	}
	return (mem);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		c;
	char	*res;

	c = 0;
	i = 1;
	res = (char *)malloc(sizeof(char) * (getmemsize(argv) + 1));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			res[c] = argv[i][j];
			j++;
			c++;
		}
		if (i != argc - 1)
			res[c++] = '\n';
		i++;
	}
	res[c] = '\0';
	return (res);
}
