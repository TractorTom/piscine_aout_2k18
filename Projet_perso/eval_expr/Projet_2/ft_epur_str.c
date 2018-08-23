/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 03:01:11 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 16:52:14 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_epur_str(char *str)
{
	char	*s1;
	int		i;
	int		j;

	j = 0;
	i = 0;
	s1 = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (s1 == NULL)
		return (s1);
	while (str[i])
	{
		if (str[i] != ' ')
			s1[j++] = str[i];
		i++;
	}
	s1[j] = '\0';
	return (s1);
}
