/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:08:08 by nbenazzo          #+#    #+#             */
/*   Updated: 2018/08/20 22:10:48 by nbenazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"

int	ft_calc_col(char *str)
{
	int res;

	res = 0;
	while (str[res] != '\n' && str[res] != '\0')
	{
		res++;
	}
	return (res);
}

int ft_calc_ligne(char *str)
{
    int res;
    int index;
    
    res = 0;
    index = 1;
    while (str[index * g_nbrcol])
    {
        if (str[index * g_nbrcol] == '\n')
            res++;
        else
            return(0);
    }
    return (res);
}

