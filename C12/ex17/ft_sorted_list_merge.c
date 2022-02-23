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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
int (*cmp)())
{
	t_list	*prev;
	t_list	*cur;
	t_list	*cmp_prev;
	t_list	*cmp_cur;
	t_list	*cmp_next;

	cmp_prev = 0;	
	cmp_cur = begin_list2;
	while (cmp_cur)
	{
		prev = 0;
		cur = *begin_list1;
		while (cur)
		{			
			if ((*cmp)(cur->data, cmp_cur->data) > 0)
			{
				cmp_next = cmp_cur->next;


				if (prev)
					prev->next = cmp_cur;
				cmp_cur->next = cur;

				
				cmp_cur = cmp_next;
			}
			prev = cur;
			cur = cur->next;
		}
		cmp_cur = cmp_cur->next;
	}
}
