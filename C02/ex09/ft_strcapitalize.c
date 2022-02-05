/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:27:29 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 18:27:30 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	idx;
	int	isCapital;

	idx = 0;
	isCapital = 1;
	while (str[idx] != '\0')
	{
		if ('A' <= str[idx] && str[idx] <= 'Z')
			str[idx] += 'a' - 'A';
		else if ('a' <= str[idx] && str[idx] <= 'z')
		{
			if (isCapital != 0)
				str[idx] -= 'a' - 'A';
			isCapital = 0;
		}
		else
			isCapital = 1;
		idx++;
	}
	return (str);
}
