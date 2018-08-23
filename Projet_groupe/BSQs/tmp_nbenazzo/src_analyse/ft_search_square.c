/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 01:05:37 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 00:42:09 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "../ft.h"

void	ft_search_square(char **tab, int length)
{
	int			i;
	t_list		**liste;
	t_rectangle	*max_square;

	i = 0;
	liste = (t_list **)malloc(sizeof(t_list *));
	if (!liste)
		return ;
	*liste = (t_list *)malloc(sizeof(t_list));
	max_square = (t_rectangle *)malloc(sizeof(t_rectangle));
	if (!(*liste) || !max_square)
		return ;
	*liste = NULL;
	while (i < length && ft_list_size(*liste) == 0)
	{
		ft_new_line(tab[i], liste, max_square, i);
		i++;
	}
	while (i < length)
	{
		ft_raise_rectangle_in_line(tab[i], liste, max_square);
		ft_new_line(tab[i], liste, max_square, i);
		i++;
	}
	ft_last_tour(liste, max_square);
	ft_input_solution(tab, *max_square);
	ft_display_resolution(tab, length);
}
