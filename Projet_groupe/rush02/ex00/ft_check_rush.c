/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:46:46 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/18 20:54:43 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_rush00(char *header, char *line, int *tab)
{
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 0;
	tab[4] = 0;
	if (ft_check_line('o', '-', 'o', header) == 0)
	{
		tab[0] = 0;
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
		tab[0] = 0;
		return (0);
	}
}

int     check_rush01(char *header, char *line, int *tab)
{
	if (ft_check_line('/', '*', '\\', header) == 0)
	{
		tab[1] = 0;
		return (0);
	}
	else if (ft_strlen(line) == 0)
		return (2);
	else if (ft_check_line('*', ' ', '*', line) == 1)
		return (1);
	else if (ft_check_line('\\', '*', '/', line) == 1)
		return (2);
	else
	{
		tab[1] = 0;
		return (0);
	}
}

int		ft_check_rush(char *header, char *line, int *tab)
{
	if (ft_strlen(header) == 0)
		return (0);
	else if (*header == 'o')
		return (check_rush00(header, line, tab));
	else if (*header == '/')
	{
		tab[0] = 0;
		tab[2] = 0;
		tab[3] = 0;
		tab[4] = 0;
		return (check_rush01(header, line, tab));
	}
	else if (*header == 'A')
	{
		tab[0] = 0;
		tab[1] = 0;
		return (check_A(header, line, tab));
	 }
	else
		return (0);
}

int		ft_check_line(char a, char b, char c, char *str)
{
	int		length;
	int		i;

	length = ft_strlen(str);
	if (length == 0)
		return (0);
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

