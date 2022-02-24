/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:22:55 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 21:22:55 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	insert_back(t_list *front, t_list *insert)
{
	t_list	*back;

	if (!front)
		return ;
	back = front->next;
	front->next = insert;
	insert->next = back;
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
int (*cmp)())
{
	t_list	*prev;
	t_list	*cur;
	t_list	*cmp_cur;
	t_list	*cmp_next;

	cmp_cur = begin_list2;
	while (cmp_cur)
	{
		prev = 0;
		cur = *begin_list1;
		cmp_next = cmp_cur->next;
		while (cur)
		{
			if ((*cmp)(cur->data, cmp_cur->data) > 0)
			{
				insert_back(prev, cmp_cur);
				break ;
			}
			prev = cur;
			cur = cur->next;
		}
		cmp_cur = cmp_next;
	}
}
