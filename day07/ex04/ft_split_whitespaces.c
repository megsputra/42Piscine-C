/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:49:46 by mputra            #+#    #+#             */
/*   Updated: 2018/08/30 17:53:47 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}

char **ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int len;
	char **res;
	char temp[1024];

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		{
			res[j] = (char *)malloc(sizeof(char) * (len + 1));
			res[j] = ft_strcpy(temp, res[j]);
			temp[0] = '\0'; //clear temp
			j++;
			len = 0; //reset len
		}
		else
		{
			temp[i] = str[i];
			i++;
			len = i;
		}
	}
	return (res);
	/*
	while (str[i])
	{
		j = i;
		while (!(str[j] == '\t'  str[j] == ' ' && str[j] == '\n'))
		{
			j++;
			temp[j] = str[j];
		}
		len = i;
		res[i] = (char *)malloc(sizeof(char) * (len + 1));
		res[i] = ft_strcpy(temp, res[i]);
		res[i][len + 1] = '\0';
	}
	return (res);
	*/
}


		
