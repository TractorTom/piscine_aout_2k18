/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 20:22:28 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/18 21:14:54 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_check(t_rush *tr), int length)
{
	int	i;

	i = 1;
	if (length == 1)
		ft_check_rush((tr->lines)[0], "", tr->cases);
	else
	{
		while (i < length)
		{
			ft_check_line((tr->lines)[0], (tr->lines)[i], tr->cases);
		}
	}
}
