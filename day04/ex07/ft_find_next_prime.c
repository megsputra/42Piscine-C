/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 18:10:40 by mputra            #+#    #+#             */
/*   Updated: 2018/08/25 21:36:17 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb >= 2)
	{
		while (i < nb)
		{
			if (nb % i != 0)
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (i < 2 * nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		++i;
	}
	return (2);
}
