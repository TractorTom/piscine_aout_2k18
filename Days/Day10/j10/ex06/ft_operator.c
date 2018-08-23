/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:10:09 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 00:32:28 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_plus(int i, int j)
{
	long	somme;

	somme = i + j;
	ft_display(somme);
}

void	ft_dif(int i, int j)
{
	long	diff;

	diff = i - j;
	ft_display(diff);
}

void	ft_mul(int i, int j)
{
	long	mul;

	mul = i * j;
	ft_display(mul);
}

void	ft_div(int i, int j)
{
	int		div;

	if (j == 0)
		ft_putstr("Stop : division by zero");
	else
	{
		div = i / j;
		ft_display(div);
	}
}

void	ft_mod(int i, int j)
{
	int		mod;

	if (j == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		mod = i % j;
		ft_display(mod);
	}
}
