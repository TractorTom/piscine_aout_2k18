/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 02:44:54 by nbenazzo          #+#    #+#             */
/*   Updated: 2018/08/21 07:46:29 by nbenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"

int		ft_checkgrid(char **tab)
{
	int	index;

	index = 0;
	while (tab[index])
	{
        printf("sdfsdfsd");
		if (ft_strlen(tab[index]) != g_nbrcol)
			return (0);
		index++;
	}
	if ((index) != g_nbrligne)
		return (0);
	return (1);
}
