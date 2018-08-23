/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_A.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 18:50:33 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/18 20:21:50 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_a(char *header, char *line, char *tab)
{
	if (ft_strlen(line) == 0)
		return (check_line_a(header, tab));
	else if (ft_strlen(header) == 1)
		return (check_line_a(header, line, tab));
	else
		return (check_rec_a(header, line, tab);
}

int		check_line_a(char *header, char *tab)
{
	if (ft_strlen(header) == 1)
		return (2);
	else if (ft_check_line('A', 'B', 'A', header) == 1)
	{
		tab[3] = 0;
		tab[4] = 0;
		return (2);
	}
	else if (ft_check_line('A', 'B', 'C', header) == 1)
	{
		tab[2] = 0;
		return (2);
	}
	else
	{
		tab[2] = 0;
	    tab[3] = 0;
		tab[4] = 0;
		return (0);
	}
}

int		check_col_a(char *header, char *line, char *tab)
{
	if (line[0] == "B")
		return (1);
	else if (line[0] == "A")
	{
		tab[2] = 0;
		tab[4] = 0;
		return (2);
	}
	else if (line[0] = 'C')
	{
		tab[3] = 0;
		return (2);
	}
	else
	{
		tab[2] = 0;
		tab[3] = 0;
		tab[4] = 0;
		return (0);
	}
}
