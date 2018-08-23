/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rec_A.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 19:15:55 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/18 20:21:43 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_check_rec_a(char *header, char *line, char *tab)
{
	if (ft_check_line('A', 'B', 'C', header) == 1)
		return (ft_check_rec_a_1(header, line, tab));
	else if (ft_check_line('A', 'B', 'A', header) == 1)
		return (ft_check_rec_a_1(header, line, tab));
	else
	{
		tab[2] = 0;
		tab[3] = 0;
		tab[4] = 0;
		return (0);
	}
}

int		ft_check_rec_a_1(char *header, char *line, char *tab)
{
	tab[2] = 0;
	if (ft_check_line('B', ' ', 'B', line) == 1)
		return (1);
	else if (ft_check_line('A', 'B', 'C', line) == 1)
	{
		tab[4] = 0;
		return (2);
	}
	else if (ft_check_line('C', 'B', 'A', line) == 1)
	{
		tab[3] = 0;
		return (2);
	}
	else
	{
		tab[3] = 0;
		tab[4] = 0;
		return (0);
	}
}

int		ft_check_rec_a_2(char *header, char *line, char *tab)
{
	tab[3] = 0;
	tab[4] = 0;
	if (ft_check_line('B', ' ', 'B', line) == 1)
		return (1);
	else if (ft_check_line('C', 'B', 'C', line) == 1)
		return (2);
	else
	{
		tab[2] = 0;
		return (0);
	}
}
