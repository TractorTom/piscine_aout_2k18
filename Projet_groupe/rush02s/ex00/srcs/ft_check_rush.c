/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:46:46 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 01:18:56 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "ft.h"

int		check_rush00(char *header, char *line, t_rush *tr)
{
	(tr->cases)[1] = 0;
	(tr->cases)[2] = 0;
	(tr->cases)[3] = 0;
	(tr->cases)[4] = 0;
	if (ft_check_line('o', '-', 'o', header) == 0)
	{
		(tr->cases)[0] = 0;
		return (0);
	}
	else if (ft_strlen(line) == 0)
		return (2);
	else if (ft_check_line('|', ' ', '|', line) == 1)
		return (1);
	else if (ft_check_line('o', '-', 'o', line) == 1)
		return (2);
	else
	{
		(tr->cases)[0] = 0;
		return (0);
	}
}

int		check_rush01(char *header, char *line, t_rush *tr)
{
	(tr->cases)[0] = 0;
	(tr->cases)[2] = 0;
	(tr->cases)[3] = 0;
	(tr->cases)[4] = 0;
	if (ft_check_line('/', '*', '\\', header) == 0)
	{
		ft_putstr("a");
		(tr->cases)[1] = 0;
		return (0);
	}
	if (ft_strlen(line) == 0)
		return (2);
	else if (ft_check_line('*', ' ', '*', line) == 1)
		return (1);
	else if (ft_check_line('\\', '*', '/', line) == 1)
		return (2);
	else
	{
		(tr->cases)[1] = 0;
		return (0);
	}
}

int		ft_check_rush(char *header, char *line, t_rush *tr)
{
	if (ft_strlen(header) == 0)
		return (0);
	else if (*header == 'o')
		return (check_rush00(header, line, tr));
	else if (*header == '/')
		return (check_rush01(header, line, tr));
	else if (*header == 'A')
	{
		(tr->cases)[0] = 0;
		(tr->cases)[1] = 0;
		return (check_a(header, line, tr));
	 }
	else
	{
		(tr->cases)[0] = 0;
		(tr->cases)[1] = 0;
		(tr->cases)[2] = 0;
		(tr->cases)[3] = 0;
		(tr->cases)[4] = 0;
		return (0);
	}
}

int		ft_check_line(char a, char b, char c, char *str)
{
	int		length;
	int		i;
	
	length = ft_strlen(str);
	if (length == 0)
		return (0);
	else if (length == 1)
		return (str[0] == a);
	else
	{
		if (str[0] != a || str[length - 1] != c)
			return (0);
		i = 1;
		while (i < length - 1)
		{
			if (str[i] != b)
				return (0);
			i++;
		}
		return (1);
	}
}
