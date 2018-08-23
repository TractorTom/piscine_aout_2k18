/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_tour.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 00:21:23 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 00:52:24 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "../ft.h"

void	ft_last_tour(t_list **liste, t_rectangle *max_square)
{
	if (*liste == NULL)
		return ;
	else
	{
		if (ft_cmp_square(ft_square((*liste)->data), max_square) > 0)
			ft_become(max_square, ft_square((*liste)->data));
		ft_last_tour(liste, max_square);
	}
}
