/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:16:08 by knoh              #+#    #+#             */
/*   Updated: 2022/02/24 11:16:08 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	void	*search;

	if (!root)
		return (0);
	search = btree_search_item(root->left, data_ref, cmpf);
	if (search)
		return (search);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	search = btree_search_item(root->right, data_ref, cmpf);
	if (search)
		return (search);
	return (0);
}
