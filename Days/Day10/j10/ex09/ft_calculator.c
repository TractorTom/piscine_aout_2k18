/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 23:55:15 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 00:33:09 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "ft_opp.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (!*s1 && !*s2)
		return (1);
	else
		return (0);
}

void	ft_usage(int a, int b)
{
	int i;

	i = a - a;
	i = b - b;
	ft_putstr("error : only [ ");
	while (i < 5)
	{
		ft_putstr(g_opptab[i++].s);
		ft_putchar(' ');
	}
	ft_putstr("] are accepted.");
}

void	ft_calcul(char **av)
{
	int		i;
	void	(*f)(int, int);
	int		j;

	i = 0;
	j = 0;
	while (i < 5)
	{
		if (ft_strcmp(av[2], g_opptab[i].s))
		{
			j = j + 1;
			f = g_opptab[i].o;
		}
		i = i + 1;
	}
	if (j == 0)
		f = g_opptab[5].o;
	f(ft_atoi(av[1]), ft_atoi(av[3]));
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		ft_calcul(av);
		ft_putchar('\n');
	}
	return (0);
}
