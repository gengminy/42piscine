/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:48:45 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 20:48:46 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*cmp;

	cmp = *begin_list1;
	if (!cmp)
		*begin_list1 = begin_list2;
	else
	{
		while (cmp->next)
			cmp = cmp->next;
		cmp->next = begin_list2;
	}
}
