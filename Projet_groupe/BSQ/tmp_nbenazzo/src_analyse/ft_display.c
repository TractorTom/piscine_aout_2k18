/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 17:01:20 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/21 23:18:52 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "../ft.h"

void	ft_input_solution(char **tab, t_rectangle max_square)
{
	int		i;
	int		j;

	i = 0;
	while (i < max_square.length)
	{
		j = 0;
		while (j < max_square.height)
		{
			tab[j + (max_square.point).y][i + (max_square.point).x] = g_info[2];
			j = j + 1;
		}
		i = i + 1;
	}
}

void	ft_display_resolution(char **tab, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
}

