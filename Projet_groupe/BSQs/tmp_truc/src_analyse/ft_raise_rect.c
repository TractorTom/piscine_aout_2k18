/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:20:25 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 14:59:41 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "../ft.h"
void			ft_raise_rectangle_in_line(char *str, t_list **liste,
				t_rectangle *max_square)
{
	t_rectangle		rect;

	if (*liste == NULL)
		return ;
	else
	{
		rect = (*liste)->data;
		*liste = (*liste)->next;
		ft_raise_rectangle_in_line(str, liste, max_square);
		ft_raise_one_rectangle(str, rect, liste, max_square);
	}
}

void			ft_raise_one_rectangle(char *str, t_rectangle rect,
				t_list **liste, t_rectangle *max_square)
{
	int				index;
	int				nlength;
	t_rectangle		*nrect;
	
	nrect = (t_rectangle *)malloc(sizeof(t_rectangle));
	if (!nrect)
		return ;
	index = (rect.point).x;
	while (index < rect.length)
	{
		while (str[index] && str[index] == g_info[1] 
				&& index - (rect.point).x < rect.length)
			index++;
		nlength = 0;
		while (str[index] && str[index] == g_info[0]
				&& index - (rect.point).x < rect.length)
		{
			nlength++;
			index++;
		}
		nrect = ft_condition_raise_rectangle(rect, nlength,
				index - nlength, max_square);
		if (nrect != NULL)
			ft_add_rect(liste, *nrect);
	}
	if (ft_cmp_square(ft_square(rect), max_square) > 0)
		ft_become(max_square, ft_square(rect));
}

t_rectangle		*ft_condition_raise_rectangle(t_rectangle rect,
				int length, int nx_debut, t_rectangle *max_square)
{
	t_rectangle		*rect_test;
	
	rect_test = (t_rectangle *)malloc(sizeof(t_rectangle));
	if (!rect_test)
		return (NULL);
	(rect_test->point).y = (rect.point).y;
	(rect_test->point).x = nx_debut;
	if (length == rect.height + 1)
	{
		rect_test->length = length;
		rect_test->height = length;
		if (ft_cmp_square(*rect_test, max_square) > 0)
			ft_become(max_square, *rect_test);
		return (NULL);
	}
	else if (length > rect.height)
	{
		rect_test->height = rect.height + 1;
		rect_test->length = length;
		return (rect_test);
	}
	else
		return (NULL);
}
