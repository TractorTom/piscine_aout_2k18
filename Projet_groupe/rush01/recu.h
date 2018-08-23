/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recu.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 03:57:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/12 22:24:46 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECU_H
# define RECU_H

# include "base.h"
# include "condition.h"

int		ft_rec2(int **tab, int position, int val, int mode);

int		ft_position(int **tab, int position)
{
	int i;

	i = position;
	while (i < 81)
	{
		if (tab[i / 9][i % 9] == 0)
			return (i);
		i = i + 1;
	}
	return (-1);
}

void	ft_initialise_grille(int **tab, int k, char **argv)
{
	int ligne;
	int col;

	ligne = k / 9 + 1;
	while (ligne < 10)
	{
		col = 0;
		if (ligne == k / 9 + 1)
			col = k % 9;
		while (col < 9)
		{
			if (argv[ligne][col] == '.')
				tab[ligne - 1][col] = 0;
			else
				tab[ligne - 1][col] = argv[ligne][col] - 48;
			col = col + 1;
		}
		ligne = ligne + 1;
	}
}

int		ft_rec(int **tab, int position, int mode)
{
	int val;
	int count;

	count = 0;
	val = 1;
	while (val < 10)
	{
		if (ft_condition(tab, val, position)
		&& ft_condition2(tab, val, position))
		{
			tab[position / 9][position % 9] = val;
			count = count + ft_rec2(tab, position, val, mode);
			tab[position / 9][position % 9] = 0;
		}
		val = val + 1;
	}
	return (count);
}

int		ft_rec2(int **tab, int position, int val, int mode)
{
	int count;
	int n_pos;

	count = 0;
	n_pos = ft_position(tab, position);
	if (position == 80 || n_pos == -1)
	{
		count = count + 1;
		if (mode)
		{
			ft_display_tab(tab);
			return (count);
		}
	}
	else
		count = count + ft_rec(tab, n_pos, mode);
	return (count);
}

#endif
