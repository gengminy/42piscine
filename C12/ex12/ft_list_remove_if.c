/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:48:24 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 20:48:24 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*node;

	prev = 0;
	node = *begin_list;
	while (node)
	{
		if ((*cmp)(node->data, data_ref) == 0)
		{
			if (!prev)
				*begin_list = node->next;
			else
				prev->next = node->next;
			free_fct(node->data);
			free(node);
		}
		prev = node;
		node = node->next;
	}
}
