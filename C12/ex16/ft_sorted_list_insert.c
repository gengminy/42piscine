/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:18:52 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 21:18:53 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new_node;
	t_list	*prev;
	t_list	*cur;

	new_node = ft_create_elem(data);
	prev = 0;
	cur = *begin_list;
	while (cur)
	{
		if ((*cmp)(cur->data, new_node->data) > 0)
		{
			if (prev)
				prev->next = new_node;
			new_node->next = cur;
			return ;
		}
		prev = cur;
		cur = cur->next;
	}
}
