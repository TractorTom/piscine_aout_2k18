/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:40:58 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/13 11:43:13 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		*ft_range(int min, int max)
{
	int					*tab;
	unsigned int		i;
	unsigned int		length;

	if (min >= max)
		return (0);
	i = 0;
	length = max - min;
	tab = (int *)malloc(sizeof(int) * length);
	if (tab == NULL)
		return (NULL);
	while (i < length)
	{
		tab[i] = i + min;
		i = i + 1;
	}
	return (tab);
}
