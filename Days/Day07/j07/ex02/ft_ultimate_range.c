/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:04:45 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/13 09:40:10 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	unsigned int	length;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	length = max - min;
	*range = (int *)malloc(sizeof(int) * (max - min));
	while (i < length)
	{
		(*range)[i] = i + min;
		i = i + 1;
	}
	return (max - min);
}
