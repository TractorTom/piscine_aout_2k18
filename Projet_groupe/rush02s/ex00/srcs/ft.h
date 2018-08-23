/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:11:08 by pvinson           #+#    #+#             */
/*   Updated: 2018/08/18 19:03:45 by pvinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

int		ft_strcmp(char *s1, char *s2);

void	ft_putnbr(int nb);

int		ft_atoi(char *nb);

void	ft_swap(int *a, int *b);

#endif
