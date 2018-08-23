/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 20:22:28 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 01:27:12 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "ft.h"

void	ft_check(t_rush *tr, int length)
{
	int	i;

	i = 1;
	if (length == 1)
		ft_check_rush((tr->lines)[0], "", tr);
	else
	{
		while (i < length)
			ft_check_rush((tr->lines)[0], (tr->lines)[i++], tr);
	}
}
