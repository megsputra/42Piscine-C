/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:28:30 by mputra            #+#    #+#             */
/*   Updated: 2018/08/27 21:24:00 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		compare(char *x, char *y)
{
	while (*x && *y)
	{
		if (*y != *x)
			return (0);
		x++;
		y++;
	}
	return (*y == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*to_find == *str && compare(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
