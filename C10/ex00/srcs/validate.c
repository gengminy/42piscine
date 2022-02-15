/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:42:43 by knoh              #+#    #+#             */
/*   Updated: 2022/02/15 19:42:44 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_arg_valid(int argc)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}