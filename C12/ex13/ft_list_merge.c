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
	while (*begin_list1)
		*begin_list1 = (*begin_list1)->next;
	if (*begin_list1)
		(*begin_list1)->next = begin_list2;
	else
		*begin_list1 = begin_list2;
}
