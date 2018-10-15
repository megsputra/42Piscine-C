/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bree_apply_infix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:42:54 by mputra            #+#    #+#             */
/*   Updated: 2018/09/06 16:46:28 by mputra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	if (root->left)
		btree_apply_infix(root->left, applyf);
	applyf(root->left);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}
