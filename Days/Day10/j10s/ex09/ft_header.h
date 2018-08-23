/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 00:37:09 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 00:33:30 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

typedef struct	s_opp
{
	char	*s;
	void	(*o)(int, int);
}				t_opp;

int				ft_is_space(char c);

int				ft_atoi(char *str);

void			ft_putchar(char c);

void			ft_putstr(char *str);

int				ft_strlen(char *str);

void			ft_display(long nbr);

void			ft_add(int i, int j);

void			ft_sub(int i, int j);

void			ft_mul(int i, int j);

void			ft_div(int i, int j);

void			ft_mod(int i, int j);

void			ft_usage(int a, int b);

int				ft_strcmp(char *s1, char *s2);

void			ft_calcul(char **av);

#endif
