/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:40:19 by mputra            #+#    #+#             */
/*   Updated: 2018/08/25 21:28:29 by mputra           ###   ########.fr       */
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
