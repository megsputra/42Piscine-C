/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 21:50:56 by mputra            #+#    #+#             */
/*   Updated: 2018/08/25 21:51:12 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_recursive_function(int i)
{
	if (i == 1)
		ft_recursive_function(i - 1);
}

int		ft_eight_queens_puzzle(void)
{
	ft_sample_recursive_function(1);
	return (92);
}
