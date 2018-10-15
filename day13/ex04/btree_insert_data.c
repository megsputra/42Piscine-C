/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:59:47 by mputra            #+#    #+#             */
/*   Updated: 2018/09/06 22:22:44 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_insert_data(t_btree **root, void *item, \
		int (*cmpf)(void *, void *))
{
	t_btree *new;

	new = btree_create_node(item);
	if (cmpf(item, root->item) < 0)
	{
		if (root->left)
			btree_insert_data(&root->left, item, cmpf);
		else
			root->left = btree_create_node(item);
	}
	else if (cmpf(item, root->item) > 0)
	{
		if (root->right)
			btree_insert_data(&root->right, item, cmpf);
		else
			root->right = btree_create_node(item);
	}
}
