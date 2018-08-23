/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:10:09 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 00:16:49 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_add(int i, int j)
{
	long	somme;

	somme = i + j;
	return (somme);
}

int		ft_sub(int i, int j)
{
	long	diff;

	diff = i - j;
	return (diff);
}

int		ft_mul(int i, int j)
{
	long	mul;

	mul = i * j;
	return (mul);
}

int		ft_div(int i, int j)
{
	int		div;

	if (j == 0)
		ft_putstr("Stop : division by zero");
	else
	{
		div = i / j;
		return (div);
	}
	return (0);
}

int		ft_mod(int i, int j)
{
	int		mod;

	if (j == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		mod = i % j;
		return (mod);
	}
	return (0);
}
