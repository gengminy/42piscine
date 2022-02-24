/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:16:14 by knoh              #+#    #+#             */
/*   Updated: 2022/02/24 11:16:15 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	level_left;
	int	level_right;

	if (!root)
		return (0);
	level_left = btree_level_count(root->left);
	level_right = btree_level_count(root->right);
	if (level_left < level_right)
		return (level_right + 1);
	else
		return (level_left + 1);
}
