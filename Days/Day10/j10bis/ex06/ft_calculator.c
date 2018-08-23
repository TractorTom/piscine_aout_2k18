/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 23:55:15 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 16:16:12 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_calcul(char **av)
{
	char	*tab;
	int		i;

	tab = "+-*/%";
	if (ft_strlen(av[2]) != 1)
		return (-1);
	i = 0;
	while (i < 6)
	{
		if (tab[i] == *av[2])
			return (i);
		i = i + 1;
	}
	return (-1);
}

int		main(int ac, char **av)
{
	void	(*f[5])(int, int);

	f[0] = &ft_plus;
	f[1] = &ft_dif;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	if (ac == 4)
	{
		if (ft_calcul(av) == -1)
			ft_putchar('0');
		else
			f[ft_calcul(av)](ft_atoi(av[1]), ft_atoi(av[3]));
		ft_putchar('\n');
	}
	return (0);
}
