/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:14:25 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/21 23:08:39 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int				min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

t_rectangle		ft_square(t_rectangle rect)
{
	rect.length = min(rect.length, rect.height);
	rect.height = rect.length;
	return (rect);
}

int				ft_cmp_square(t_rectangle rect, t_rectangle *max_square)
{
	if (max_square == NULL || rect.length > (*max_square).length)
		return (1);
	else if (rect.length < (*max_square).length ||
			(rect.point).y > ((*max_square).point).y)
		return (-1);
	else if ((rect.point).y < ((*max_square).point).y ||
			(rect.point).x < ((*max_square).point).x)
		return (1);
	else if ((rect.point).x > ((*max_square).point).x)
		return (-1);
	else
		return (-1);
}

void			ft_become(t_rectangle *max_square, t_rectangle rect)
{
	(max_square->point).x = (rect.point).x;
	(max_square->point).y = (rect.point).y;
	max_square->length = rect.length;
	max_square->height = rect.height;
}
