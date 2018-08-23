/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:03:02 by pvinson           #+#    #+#             */
/*   Updated: 2018/08/19 00:57:52 by pvinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>
# define NBCASES 5
# define NBLINES 10042
# define LINESIZE 10042

typedef struct		s_rush
{
	int				*cases;
	char			**lines;
}					t_rush;

void				ft_none(void);

void				ft_results(int *tab, int sizex, int sizey);

void				ft_rush(void);

t_rush				*ft_init_t_rush(void);

void				ft_free_t_rush(t_rush *tr);

void				ft_check(t_rush *tr, int sizey);

int					check_a(char *header, char *line, t_rush *tr);

int					check_line_a(char *header, t_rush *tr);

int					check_col_a(char *line, t_rush *tr);

int					ft_check_rec_a(char *header, char *line, t_rush *tr);

int					ft_check_rec_a_1(char *line, t_rush *tr);

int					ft_check_rec_a_2(char *line, t_rush *tr);

int					check_rush00(char *header, char *line, t_rush *tr);

int					check_rush01(char *header, char *line, t_rush *tr);

int					ft_check_rush(char *header, char *line, t_rush *tr);

int					ft_check_line(char a, char b, char c, char *str);

#endif
