/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:55:23 by knoh              #+#    #+#             */
/*   Updated: 2022/02/15 19:55:24 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int	rem(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
