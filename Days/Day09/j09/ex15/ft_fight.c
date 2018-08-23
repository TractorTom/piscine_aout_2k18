/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:00:15 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/10 15:45:10 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"
#include "ft_perso.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_put2str(char *str1, char *str2)
{
	ft_putstr(str1);
	ft_putstr(str2);
}

void	ft_fight(t_perso attaquant, t_perso defenseur, int attaque)
{
	if ((attaquant.life == 0) || (defenseur.life == 0))
		return ;
	ft_put2str(attaquant.name, " does a judo ");
	if (attaque == KICK)
	{
		defenseur.life = defenseur.life - KICK;
		ft_putstr("kick");
	}
	else if (attaque == PUNCH)
	{
		defenseur.life = defenseur.life - PUNCH;
		ft_putstr("punch");
	}
	else if (attaque == HEADBUTT)
	{
		defenseur.life = defenseur.life - HEADBUTT;
		ft_putstr("headbutt");
	}
	ft_put2str(" on ", defenseur.name);
	ft_putchar('\n');
	if (defenseur.life <= 0)
		ft_put2str(defenseur.name, " is dead.\n");
}
