/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:16:02 by knoh              #+#    #+#             */
/*   Updated: 2022/02/24 11:16:03 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf(item, (*root)->item) < 0)
	{
		if (!(*root)->left)
			(*root)->left = btree_create_node(item);
		else
			btree_insert_data(&(*root)->left, item, cmpf);
	}
	else
	{
		if (!(*root)->right)
			(*root)->right = btree_create_node(item);
		else
			btree_insert_data(&(*root)->right, item, cmpf);
	}
}
