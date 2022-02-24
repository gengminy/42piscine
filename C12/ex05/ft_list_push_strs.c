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
	t_list	*new_next;
	t_list	*new_node;
	int		i;

	new_node = 0;
	i = 0;
	while (i < size)
	{
		new_next = new_node;
		new_node = ft_create_elem(strs[i]);
		new_node->next = new_next;
		i++;
	}
	return (new_node);
}
