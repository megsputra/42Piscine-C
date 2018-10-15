/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:23:21 by mputra            #+#    #+#             */
/*   Updated: 2018/08/27 14:04:03 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\f' || *str == '\v' \
			|| *str == '\n' || *str == '\t' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (int)(*str++ - '0');
	return (sign * num);
}
