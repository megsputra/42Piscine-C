/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:18:32 by mputra            #+#    #+#             */
/*   Updated: 2018/09/03 17:24:52 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "operator.h"

int		ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int		ft_doop(int val1, char op, int val2)
{
	if (op == '+')
		return (ft_add(val1, val2));
	else if (op == '-')
		return (ft_subtract(val1, val2));
	else if (op == '*')
		return (ft_mul(val1, val2));
	else if (op == '/')
		return (ft_div(val1, val2));
	else if (op == '%')
		return (ft_mod(val1, val2));
	else
		return (0);
}

int main(int argc, char **argv)
{
	int val1;
	int val2;
	char *op;

	if (argc == 4)
	{
		val1 = ft_atoi(argv[1]);
		val2 = ft_atoi(argv[3]);
		op = argv[2];
		if (val2 == 0 && *op == '/')
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (val2 == 0 && *op == '%')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		ft_putnbr(ft_doop(val1, *op, val2));
		ft_putchar('\n');
	}
	return (0);
}
