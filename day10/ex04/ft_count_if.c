/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:57:48 by mputra            #+#    #+#             */
/*   Updated: 2018/09/03 11:05:15 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
