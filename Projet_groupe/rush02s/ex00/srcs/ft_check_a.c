/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_A.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 18:50:33 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 18:09:52 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "ft.h"

int		check_a(char *header, char *line, t_rush *tr)
{
	if (ft_strlen(line) == 0)
		return (check_line_a(header, tr));
	else if (ft_strlen(header) == 1)
		return (check_col_a(line, tr));
	else
		return (ft_check_rec_a(header, line, tr));
}

int		check_line_a(char *header, t_rush *tr)
{
	if (ft_strlen(header) == 1)
		return (2);
	else if (ft_check_line('A', 'B', 'A', header) == 1)
	{
		(tr->cases)[3] = 0;
		(tr->cases)[4] = 0;
		return (2);
	}
	else if (ft_check_line('A', 'B', 'C', header) == 1)
	{
		(tr->cases)[2] = 0;
		return (2);
	}
	else
	{
		(tr->cases)[2] = 0;
	    (tr->cases)[3] = 0;
		(tr->cases)[4] = 0;
		return (0);
	}
}

int		check_col_a(char *line, t_rush *tr)
{
	if (line[0] == 'B')
		return (1);
	else if (line[0] == 'A')
	{
		(tr->cases)[2] = 0;
		(tr->cases)[4] = 0;
		return (2);
	}
	else if (line[0] == 'C')
	{
		(tr->cases)[3] = 0;
		return (2);
	}
	else
	{
		(tr->cases)[2] = 0;
		(tr->cases)[3] = 0;
		(tr->cases)[4] = 0;
		return (0);
	}
}
