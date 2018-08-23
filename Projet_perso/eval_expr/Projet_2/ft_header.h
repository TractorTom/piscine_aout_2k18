/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 00:37:09 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/19 19:23:13 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_opp
{
	char	*s;
	int		(*o)(int, int);
}				t_opp;

int				ft_calcul(char c, int a, int b);
int				ft_value_calcul(char *str);
int				ft_shift_index(char *str);
int				ft_calculator(char *str, int inter, char sng);

int				ft_is_num(char c);
int				ft_is_space(char c);
int				ft_is_op_prio(char c);
int				ft_is_op_nprio(char c);

char			*ft_str_nprems(char *s1, int length);
int				ft_len_str_bracket(char *str);
int				ft_put_str_num(char *str);
int				ft_len_str_num(char *str);

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_putnbr(long nbr);

char			*ft_epur_str(char *str);

int				ft_add(int i, int j);
int				ft_sub(int i, int j);
int				ft_mul(int i, int j);
int				ft_div(int i, int j);
int				ft_mod(int i, int j);

#endif
