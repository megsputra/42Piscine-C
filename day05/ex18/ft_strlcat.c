/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:33:11 by mputra            #+#    #+#             */
/*   Updated: 2018/08/28 18:15:32 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len;
	unsigned int i;
	unsigned int res;

	i = 0;
	while (dest[i] != '\0')
		i++;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	len = 0;
	while (src[len] != '\0' && i + 1 < size)
	{
		dest[i] = src[len];
		len++;
		i++;
	}
	dest[i] = '\0';
	return (res);
}
