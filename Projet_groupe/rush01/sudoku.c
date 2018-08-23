/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 18:50:04 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/12 22:40:04 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"
#include "condition.h"
#include "recu.h"
#include <stdlib.h>

void		ft_resolv_sudoku(char **argv)
{
	int **tab;
	int i;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * 9);
	if (tab == NULL)
		return ;
	while (i < 9)
	{
		tab[i] = (int *)malloc(sizeof(int) * 9);
		if (tab[i++] == NULL)
			return ;
	}
	ft_initialise_grille(tab, 0, argv);
	if (!(ft_rec(tab, ft_position(tab, 0), 0) == 1))
	{
		ft_initialise_grille(tab, 0, argv);
		ft_rec(tab, ft_position(tab, 0), 1);
	}
	else
		ft_putstr("Error\n");
}

int			main(int ac, char **av)
{
	if (ac != 10)
		ft_putstr("Error\n");
	else if (!ft_condition3(av))
		ft_putstr("Error\n");
	else if (!ft_condition4(av))
		ft_putstr("Error\n");
	else
		ft_resolv_sudoku(av);
	return (0);
}
