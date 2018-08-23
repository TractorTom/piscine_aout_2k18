/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 00:40:22 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/12 11:38:17 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONDITION_H
# define CONDITION_H

# include "base.h"
# include <stdio.h>

int		ft_condition(int **tab, int nbr, int position)
{
	int k;

	k = 0;
	while (k < 9)
	{
		if (tab[k][position % 9] == nbr && k != (position / 9))
			return (0);
		if (tab[position / 9][k] == nbr && k != (position % 9))
			return (0);
		k = k + 1;
	}
	return (1);
}

int		ft_condition2(int **tab, int nbr, int position)
{
	int k;
	int	l;
	int i;
	int j;

	k = 0;
	while (k < 3)
	{
		l = 0;
		while (l < 3)
		{
			i = k + (3 * ((position / 9) / 3));
			j = l + (3 * ((position % 9) / 3));
			if (tab[i][j] == nbr && (i != position / 9 || j != position % 9))
				return (0);
			l = l + 1;
		}
		k = k + 1;
	}
	return (1);
}

int		ft_condition3(char **tab)
{
	int i;
	int j;

	i = 1;
	while (tab[i])
	{
		if (ft_strlen(tab[i]) != 9)
			return (0);
		j = 0;
		while (j < 9)
		{
			if (!((tab[i][j] >= '0' && tab[i][j] <= '9') || tab[i][j] == '.'))
				return (0);
			j = j + 1;
		}
		i = i + 1;
	}
	return (1);
}

int		ft_condition4(char **tab)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i < 9)
	{
		j = 9;
		while (0 < --j)
		{
			k = -1;
			while (++k < j)
			{
				if (tab[i + 1][j] == tab[i + 1][k] && tab[i + 1][j] != '.')
					return (0);
				if (tab[j + 1][i] == tab[k + 1][i] && tab[j + 1][i] != '.')
					return (0);
				if (tab[3 * (i / 3) + (j / 3) + 1][3 * (i % 3) + (j % 3)] ==
				tab[3 * (i / 3) + (k / 3) + 1][3 * (i % 3) + (k % 3)] &&
				tab[3 * (i / 3) + (j / 3) + 1][3 * (i % 3) + (j % 3)] != '.')
					return (0);
			}
		}
	}
	return (1);
}

#endif
