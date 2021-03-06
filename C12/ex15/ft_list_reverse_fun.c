/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:08:27 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 21:08:27 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*begin;
	t_list	*end;
	void	*swap;

	end = 0;
	begin = begin_list;
	while (begin_list != end)
	{
		begin = begin_list;
		while (begin->next && begin->next != end)
		{
			swap = begin->data;
			begin->data = begin->next->data;
			begin->next->data = swap;
			begin = begin->next;
		}
		end = begin;
	}
}
