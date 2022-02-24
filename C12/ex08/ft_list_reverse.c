/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:24:08 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 19:24:08 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*left;
	t_list	*cur;
	t_list	*right;

	left = 0;
	cur = *begin_list;
	while (cur && cur->next)
	{
		right = cur->next;
		cur->next = left;
		left = cur;
		cur = right;
	}
	if (cur)
		cur->next = left;
	*begin_list = right;
}
