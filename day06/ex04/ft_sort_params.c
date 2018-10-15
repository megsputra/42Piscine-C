/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:10:29 by mputra            #+#    #+#             */
/*   Updated: 2018/08/29 14:49:13 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}


void	ft_putstr(char *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
}

void	sort_ascii(char **c, int n)
{
	int i;
	int j;
	char *temp;

	i = 0;
	while (i < n - 1)
	{
		j = 1;
		while (j < n - 1)
		{
			if(ft_strcmp(c[j], c[j + 1]) > 0)
			{
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{	
	sort_ascii(argv, argc);
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
