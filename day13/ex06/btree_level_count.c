/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 22:35:20 by mputra            #+#    #+#             */
/*   Updated: 2018/09/06 23:02:05 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_max(int node1, int node2)
{
	if (node1 > node2)
		return (node1);
	else
		return (node2);
}

int	btree_level_count(t_btree *root)
{
	int	count;

	count = 0;
	if (!root)
		return (0);
	if (root->left)
		count = ft_max(count, btree_level_count(root->left));
	if (root->right)
		count = ft_max(count, btree_level_count(root->right));
	return (count + 1);
}
