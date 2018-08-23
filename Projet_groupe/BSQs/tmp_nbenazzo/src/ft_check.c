/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 02:44:54 by nbenazzo          #+#    #+#             */
/*   Updated: 2018/08/22 01:02:29 by nbenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"

int		ft_in_array(char c, char *tab)
{
	if	 (c == tab[0] || c == tab[1])
		return (1);
	return (0);
}

int		ft_checkbuffer(char *tab)
{
	int	index;
	int compteur;

	index = 0;
	compteur = 0;
	while (tab[index])
	{
		if(index > 0 && tab[index] == '\n' && (index - compteur) % g_nbrcol == 0)
		{
			compteur++;
			g_nbrligne--;
		}
		if(tab[index] != '\n'
			&&(!(ft_in_array(tab[index], g_info))))
			return (0);
		index++;
	}
	return (1);
}
