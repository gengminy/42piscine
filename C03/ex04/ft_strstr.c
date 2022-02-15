/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:46:45 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 21:46:46 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*orig;
	char	*search;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		orig = &str[i];
		search = to_find;
		while (*orig && *search && (*orig == *search))
		{
			orig++;
			search++;
		}
		if (*search == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
