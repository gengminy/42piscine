/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:55:56 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 18:55:57 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*cmp;

	cmp = *begin_list;
	while (cmp)
	{
		if (cmp->next)
			cmp = cmp->next;
		else
			break ;
	}
	cmp->next = ft_create_elem(data);
}
