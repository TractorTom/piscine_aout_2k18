/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 23:13:58 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/12 17:15:19 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_ultimator.h"
# include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[i] != NULL)
	{
		j = 0;
		while (factory[i][j] != NULL)
		{
			free(factory[i][j]);
			j = j + 1;
		}
		free(factory[i]);
		i = i + 1;
	}
	free(factory);
}
