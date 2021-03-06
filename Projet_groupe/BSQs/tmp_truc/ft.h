/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almoinie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:21:44 by almoinie          #+#    #+#             */
/*   Updated: 2018/08/21 20:13:48 by nbenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define SIZE 4096

int		g_nbrligne;
int		g_nbrcol;
int		argcall(int file);
void	funcall(int file);
char	g_info[3];
char	**g_grid;
void    ft_search_square(char **tab, int length);
int		ft_checkbuffer(char *tab);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_nbrcol(char*str);
int		ft_calc_col(char *str);
int		ft_calc_ligne(char *str);
int		ft_in_array(char c, char *tab);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
char	**ft_split_whitespaces(char *src);
char	*recupfirstline(int file);// ligne des infos
char	*recuplineone(int file); //premiere ligne de la grille
int		recupinfofirstline(char *str);
#endif
