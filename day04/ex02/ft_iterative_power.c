/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 16:55:28 by mputra            #+#    #+#             */
/*   Updated: 2018/08/25 13:42:09 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		r = 1;
		while (power > 0)
		{
			r *= nb;
			power--;
		}
		return (r);
	}
}
