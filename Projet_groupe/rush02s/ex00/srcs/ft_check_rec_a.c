/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rec_A.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 19:15:55 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 18:09:48 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_check_rec_a(char *header, char *line, t_rush *tr)
{
	if (ft_check_line('A', 'B', 'C', header) == 1)
		return (ft_check_rec_a_1(line, tr));
	else if (ft_check_line('A', 'B', 'A', header) == 1)
		return (ft_check_rec_a_2(line, tr));
	else
	{
		(tr->cases)[2] = 0;
		(tr->cases)[3] = 0;
		(tr->cases)[4] = 0;
		return (0);
	}
}

int		ft_check_rec_a_1(char *line, t_rush *tr)
{
	(tr->cases)[2] = 0;
	if (ft_check_line('B', ' ', 'B', line) == 1)
		return (1);
	else if (ft_check_line('A', 'B', 'C', line) == 1)
	{
		(tr->cases)[4] = 0;
		return (2);
	}
	else if (ft_check_line('C', 'B', 'A', line) == 1)
	{
		(tr->cases)[3] = 0;
		return (2);
	}
	else
	{
		(tr->cases)[3] = 0;
		(tr->cases)[4] = 0;
		return (0);
	}
}

int		ft_check_rec_a_2(char *line, t_rush *tr)
{
	(tr->cases)[3] = 0;
	(tr->cases)[4] = 0;
	if (ft_check_line('B', ' ', 'B', line) == 1)
		return (1);
	else if (ft_check_line('C', 'B', 'C', line) == 1)
		return (2);
	else
	{
		(tr->cases)[2] = 0;
		return (0);
	}
}
