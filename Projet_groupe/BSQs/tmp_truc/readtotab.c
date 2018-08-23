/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readtotab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:14:29 by nbenazzo          #+#    #+#             */
/*   Updated: 2018/08/22 01:00:46 by nbenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*recupgrid(int file)
{
	char	buffer[10000];
	int		ret;
	char	*tmp;
	char	*str;
	int		len;

	if (!(str = (char*)malloc(sizeof(char))))
		return (0);
	*str = '\0';
	while ((ret = read(file, buffer, 10001)))
	{
		tmp = str;
		len = ft_strlen(tmp);
		str = ft_strcpy((char*)malloc(sizeof(char) * (len + ret + 1)), tmp);
		free(tmp);
		if (!(str))
			return (0);
		buffer[ret] = '\0';
		str = ft_strcat(str, buffer);
	}
	return (str);
}

void	funcall(int file)
{
	char	*str1;
	char	*str;
    char    **tab;
	int		savenbrligne;
	g_nbrcol = 0;
	g_nbrligne = 0;
	if ((str=recupfirstline(file)) && recupinfofirstline(str) && g_nbrligne > 0)
	{
		savenbrligne = g_nbrligne;
		if ((str1 = recuplineone(file)) && (str = recupgrid(file))
				&& (str1 = ft_strcat(str1,"\n")) && 
				ft_checkbuffer(str1) && 
				ft_checkbuffer(str) && 
				g_nbrligne == 0 )
		{
			g_nbrligne = savenbrligne;
			str1 = ft_strcat(str1,str);
            printf("grid \n%s",str1);
            tab = ft_split_whitespaces(str1);
            //printf("%s",tab[0]);
            //ft_search_square(tab, g_nbrligne);
			ft_putstr("gg ez");
		}
		else
			ft_putstr("map error2\n");
	}
	else
		ft_putstr("map error\n");
}
