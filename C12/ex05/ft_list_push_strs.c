/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:07:57 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 19:07:58 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin;
	t_list	*new_next;
	t_list	*new_node;
	int		i;

	begin = 0;
	if (size > 0)
	{
		begin = ft_create_elem(strs[0]);
		new_next = begin;
	}
	i = 1;
	while (i < size)
	{
		new_node = ft_create_elem(strs[i]);
		new_node->next = new_next;
		new_next = new_node;
		i++;
	}
	return (begin);
}
