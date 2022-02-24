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

char	*ft_strcapitalize(char *str)
{
	int	idx;
	int	isCapital;

	idx = -1;
	isCapital = 1;
	while (str[++idx] != '\0')
	{
		if ('0' <= str[idx] && str[idx] <= '9')
			isCapital = 0;
		else if ('A' <= str[idx] && str[idx] <= 'Z')
		{
			if (!isCapital)
				str[idx] += 'a' - 'A';
			isCapital = 0;
		}
		else if ('a' <= str[idx] && str[idx] <= 'z')
		{
			if (isCapital)
				str[idx] -= 'a' - 'A';
			isCapital = 0;
		}
		else
			isCapital = 1;
	}
	return (str);
}
