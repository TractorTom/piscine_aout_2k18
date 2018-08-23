/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:21:45 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/21 23:29:16 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "../ft.h"

void	ft_new_line(char *str, t_list **liste, t_rectangle *max_square,
		int num_line)
{
	int				i;
	t_point			point;

	point.y = num_line;
	i = 0;
	while (str[i])
	{
		point.x = i;
		i = i + ft_new_line_one_rect(str + i, liste, max_square, point);
	}
}

int		ft_new_line_one_rect(char *str, t_list **liste,
		t_rectangle *max_square, t_point point)
{
	int				index;
	t_rectangle		rect;
	int				length;

	index = 0;
	while (str[index] == g_info[1])
		index++;
	length = 0;
	while (str[index] == g_info[0])
	{
		length++;
		index++;
	}
	point.x = point.x + index - length;
	rect.point = point;
	rect.height = 1;
	rect.length = length;
	if (length > 1)
		ft_add_rect(liste, rect);
	else if (length == 1 && ft_cmp_square(ft_square(rect), max_square) > 0)
		ft_become(max_square, ft_square(rect));
	return (index);
}
