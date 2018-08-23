/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_results.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:14:10 by pvinson           #+#    #+#             */
/*   Updated: 2018/08/18 21:11:08 by pvinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "cases.h"
#include "ft.h"

void	ft_putcase(int i, int sizex, int sizey)
{
	ft_putstr(tabcase[i]);
	ft_putstr(" [");
	ft_putnbr(sizex);
	ft_putstr("]");
	ft_putstr(" [");
	ft_putnbr(sizey);
	ft_putstr("]");
}

void	ft_results(int *tab, int sizex, int sizey)
{
	int i;
	int nbcheck;

	nbcheck = 0;
	i = -1;
	while (++i < NBCASES)
		if (tab[i] == 1)
			nbcheck++;
	if (!nbcheck)
		return ft_none();
	i = -1;
	while (nbcheck > 0 && ++i < NBCASES)
	{
		if (tab[i] == 1)
		{
			ft_putcase(i, sizex, sizey);
			nbcheck--;
			if (nbcheck)
				ft_putstr(" || ");
		}
	}
	ft_putchar('\n');
}
