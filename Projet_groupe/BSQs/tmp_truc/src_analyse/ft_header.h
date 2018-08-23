/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:19:56 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 00:47:59 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_point
{
	int				x;
	int				y;
}				t_point;

typedef struct	s_rectangle
{
	t_point			point;
	int				length;
	int				height;
}				t_rectangle;

typedef struct	s_list
{
	t_rectangle		data;
	struct s_list	*next;
}				t_list;

t_list			*ft_create_elem(t_rectangle rect);
void			ft_add_rect(t_list **end_list, t_rectangle rect);
int				ft_list_size(t_list *liste);

void			ft_new_line(char *str, t_list **liste, t_rectangle *max_square,
				int num_line);
int				ft_new_line_one_rect(char *str, t_list **liste, t_rectangle
				*max_square, t_point point);

void			ft_raise_rectangle_in_line(char *str, t_list **liste,
				t_rectangle *max_square);
void			ft_raise_one_rectangle(char *str, t_rectangle rect, t_list
				**liste, t_rectangle *max_square);
t_rectangle		*ft_condition_raise_rectangle(t_rectangle rect, int length,
				int index, t_rectangle *max_square);

void			ft_search_square(char **tab, int length);

int				min(int a, int b);
t_rectangle		ft_square(t_rectangle rect);
int				ft_cmp_square(t_rectangle rect, t_rectangle *max_square);
void			ft_become(t_rectangle *max_square, t_rectangle rect);

void			ft_input_solution(char **tab, t_rectangle max_square);
void			ft_display_resolution(char **tab, int length);

void			ft_aff_rect(t_rectangle rect);
void			ft_aff_list(t_list *liste);

void			ft_last_tour(t_list **liste, t_rectangle *max_square);

#endif
