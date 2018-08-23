/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 00:37:09 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 00:14:44 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

int		ft_is_space(char c);

int		ft_atoi(char *str);

int		ft_calcul(char **av);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

void	ft_display(long nbr);

void	ft_plus(int i, int j);

void	ft_dif(int i, int j);

void	ft_mul(int i, int j);

void	ft_div(int i, int j);

void	ft_mod(int i, int j);

#endif
