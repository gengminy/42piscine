/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:50:47 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 20:50:48 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*begin;
	t_list	*cur;
	void	*swap;

	begin = *begin_list;
	cur = *begin_list;
	while (cur && cur->next)
	{
		if (cmp(cur->data, cur->next->data) > 0)
		{
			swap = cur->data;
			cur->data = cur->next->data;
			cur->next->data = swap;
			cur = *begin_list;
			continue ;
		}
		cur = cur->next;
	}
}
